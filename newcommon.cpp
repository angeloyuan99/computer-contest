#include<iostream>
#include<map>
#include<set>
using namespace std;
struct comp { 
    template <typename T> 
    bool operator()(const T& l, 
                    const T& r) const
    { 
        if (l.second != r.second) { 
            return l.second < r.second; 
        } 
        return l.first < r.first; 
    } 
}; 
void sort(map<string, int>& M) { 
    set<pair<string, int>, comp> S(M.begin(), M.end()); 
} 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int numberoftestcases;
    cin >> numberoftestcases;
    for(int loopnumberfortestcases = 0; loopnumberfortestcases < numberoftestcases; loopnumberfortestcases++){
        int words, ithmostcommon;
        cin >> words >> ithmostcommon;
        map<string, int> counters;
        for(int loopnumberforinput = 0; loopnumberforinput < words; loopnumberforinput++){
            string input;
            cin >> input;
            counters[input]++;
        }
        sort(counters);
        int counter[ithmostcommon];
        for(int i = 0; i < ithmostcommon; i++){
            counter[i] = -1;
        }
        map<string, int>::iterator tempit = counters.begin();
        tempit++;
        int i = 0;
        map<string, int>::iterator newit = counters.end();
        newit--;
        for(map<string, int>::iterator it = counters.begin(); it != newit && i < ithmostcommon; it++){
            if(tempit == it){
                tempit++;
                i++;
                continue;
            } else{
                counter[i] = tempit->second;
                tempit++;
                i++;
            }
        }
        if(ithmostcommon == 1){
            cout << "1st most common word(s):\n";
        } else if(ithmostcommon == 2){
            cout << "2nd most common word(s)\n";
        } else if(ithmostcommon == 3){
            cout << "3rd most common word(s):\n";
        } else{
            cout << ithmostcommon << "th most common word(s):\n";
        }
        if(counter[ithmostcommon - 1] == -1){
            cout << "\n";
        } else{
            for(map<string, int>::iterator it = counters.begin(); it != counters.end(); it++){
                if(it->second == counter[ithmostcommon - 1]){
                    cout << it->first << "\n";
                }
            }
            cout << "\n";
        }
    }
}
// 3
// 7 2
// the
// brown
// the
// fox
// red
// the
// red
// 1 3
// the
// 2 1
// the
// wash