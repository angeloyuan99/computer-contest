#include<iostream>
#include<algorithm>
using namespace std;
struct lwh{
    int l;
    int w;
    int h;
    int size;
};
void lwhsort(lwh& data){
    if(data.l > data.w){
        int temp;
        temp = data.l;
        data.l = data.w;
        data.w = temp;
    }
    if(data.w > data.h){
        int temp;
        temp = data.h;
        data.h = data.w;
        data.w = temp;
    }
    if(data.l > data.w){
        int temp;
        temp = data.l;
        data.l = data.w;
        data.w = temp;
    }

    data.size    = data.l   * data.h * data.w;
}

int main(){
    int n;
    cin >> n;
    lwh boxsize[n];
    for(int i = 0; i < n; i++){
        cin >> boxsize[i].l >> boxsize[i].w >> boxsize[i].h;
        lwhsort(boxsize[i]);
    }
    int w;
    cin >> w;
    lwh items[w];
    for(int i = 0; i < w; i++){
        cin >> items[i].l >> items[i].w >> items[i].h;
        lwhsort(items[i]);
    }

    for(int i = n - 1; i >= 0; i--){
        int index = 0;
        int max1 = boxsize[index].size;
        for(int j = 0; j <= i; j++){
            if(boxsize[j].size > max1){
                max1 = boxsize[j].size;
                index = j;
            }
        }
        lwh intTemp = boxsize[i];
        boxsize[i] = boxsize[index];
        boxsize[index] = intTemp;
    }
    for(int i = 0; i < w; i++){
        items[i].size = -1;
        for(int j = 0; j < n; j++){
            if(items[i].l <= boxsize[j].l && items[i].w <= boxsize[j].w && items[i].h <= boxsize[j].h){
                items[i].size = boxsize[j].size;
                break;
            }
        }
    }
    for(int i = 0; i < w; i++){
        if(items[i].size != -1){
            cout << items[i].size << "\n";
        } else{
            cout << "Item does not fit.\n";
        }
    }
}