    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main(){
        int n;
        cin >> n;
        int policecheckorder[n];
        for(int i = 0; i < n; i++){
            cin >> policecheckorder[i];
        }
        if(n == 1){
            cout << "-1\n";
            return 0;
        }
        bool condition = true;
        for(int i = 0; i < n - 1; i++){
            if(policecheckorder[i] != policecheckorder[i + 1]){
                condition = false;
            }
        }
        if(condition){
            cout << "-1\n";
            return 0;

        }
        bool visited[n], seen[n];
        for(int i = 0; i < n; i++){
            visited[i] = false;
            seen[i] = false;
        }
        int orderofdeduction[n], order[n], put = 0;
        for(int i = n - 1; i >= 0; i--){
            if(!seen[policecheckorder[i]]){
                seen[policecheckorder[i]] = true;a
                orderofdeduction[put] = policecheckorder[i];
                put++;
            }
        }
        for(int i = 0; i < n; i++){
            cout << orderofdeduction[i] << " ";
        }
        cout << "\n";
        for(int i = n - 1; i >= 0; i--){
           // cout << "i: " << i << " " << orderofdeduction[i] << "\n\n";
            for(int j = 0; j < n; j++){
                //cout << "j: " << j << " " << visited[j] << " " << policecheckorder[j] << "\n";
                if(!visited[j] && orderofdeduction[i] != policecheckorder[j]){
                    visited[j] = true;
                    order[j] = orderofdeduction[i];
                    break;
                  //  cout << j << " " << orderofdeduction[i] << "\n";
                }
            }
         //   cout << "\n";
        }
        // if(order[0] == 8 && order[1] == 7 && order[7] == 0){
        //     cout <<  n << "\n";
        //     for(int i = 0; i < n; i++){
        //         cout << policecheckorder[i] << " ";
        //     }
        //     cout << "\n";
        // }
        for(int i = 0; i < n; i++){
           // cout << order[i] << " ";
        }
   //     cout << "\n";
        return 0;
}