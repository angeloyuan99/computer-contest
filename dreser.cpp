#include<string>
#include<iostream>
using namespace std;
int main(){

    int h;
    cin >> h;
    for(int i = 0; i < h/2; i++){
        cout<<string(i*2+1,'*')<<string(h*2-2*(i*2+1),' ')<<string(i*2+1,'*')<<endl;
    }
    cout<<string(h*2,'*')<<endl;
    for(int i = h/2-1; i > -1; i--){
        cout<<string(i*2+1,'*')<<string(h*2-2*(i*2+1),' ')<<string(i*2+1,'*')<<endl;
    }
    return 0;
}