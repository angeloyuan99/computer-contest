    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main(){
        int n;
        cin >> n;
        if(n == 1){
            cout << "1\n";
            return 0;
        }
        int presentweights[n];
        for(int i = 0; i < n; i++){
            cin >> presentweights[i];
        }
        sort(presentweights, presentweights+n); 
        // for(int i = 0; i < n; i++){
        //     cout << presentweights[i];
        // }
        int base = presentweights[n - 1], totalweight = 0, presents = 1;
        for(int i = 0; i < n; i++){
            if(totalweight > presentweights[i]){
                continue;
            } else if(totalweight + presentweights[i] > base){
                break;

            } else{
                totalweight += presentweights[i];
                //cout << presentweights[i] << "\n";
                presents++;
            }
        }
        // if(presents == 2 && n != 3 && n != 2){
        //     cout << n << " ";
        //     for(int i = 0; i < n; i++){
        //         cout << presentweights[i] << " ";
        //     }
        // }
        cout << presents << "\n";
    }
    // 5
    // 7
    // 8
    // 2
    // 5
    // 10