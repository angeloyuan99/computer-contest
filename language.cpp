#include<iostream>
using namespace std;
int main()
{
    int tests, scount=0, tcount=0;
    cin>>tests;
    for(int t = 0; t < tests; t++){
        string str;
        cin>>ws;
        getline(cin, str);
        for(int i = 0; i < str.length(); i++){
            if(str[i] == 't' || str[i] == 'T'){
                tcount++;
            }
            else if(str[i] == 's' || str[i] == 'S'){
                scount++;
            }
        }
    }
    if(scount >= tcount) cout<<"French"<<endl;
    else cout<<"English"<<endl;
    return 0;
}

 