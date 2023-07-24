#include<iostream>
    #include<algorithm>
    using namespace std;
    int main(){
        int n;  
        cin >> n;
        long long petals[n + 1];
        petals[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> petals[i];
        }
        for(int i = 1; i <= n; i++){
            petals[i] += petals[i - 1];
        }
        int totalcounter = n;
        for(int i = 1; i < n; i++){
            for(int j = i + 1; j <= n; j++){
                if(((petals[j] - petals[i - 1])% (j - i + 1)) != 0){
                    continue;
                }
                int average = ( petals[j] - petals[i - 1]) / (j - i + 1);
            //   cout << i << " " << j << " " << "average: " << average << "\n";
                for(int k = i; k <= j ; k++){
                    if(petals[k] - petals[k - 1] == average){
                    //  cout << petals[k] - petals[k - 1] << "\n\n";
                        totalcounter++;
                        break;
                    }
                }
            }
        }
        cout << totalcounter << "\n";
    }