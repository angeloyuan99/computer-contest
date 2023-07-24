#include<iostream>
#include<map>
using namespace std;
int main(){
  int cards, mana;
  cin>>cards>>mana;
  map<string, int> deck;
  for(int i = 0; i < cards; i++){
    int tmana;
    string name;
    cin>>ws;
    cin>>name>>tmana;
    if(tmana>mana-2){
      continue;
    }
    deck.insert(pair<string, int>(name, tmana));
  }
  string names[cards];
  int cost[cards];
  int hgf = 0;
  for (auto it=deck.begin(); it!=deck.end(); it++, hgf++){
    names[hgf] = it->first;
    cost[hgf] = it->second;
  }
  cards = deck.size();
  // for(int i = 0; i < cards; i++){
  //   cout<<names[i]<<" "<<cost[i]<<"\n";
  // }
  for(int i = 0; i < cards-2; i++){
    for(int j = i+1; j< cards-1; j++){
      for(int k = j+1; k< cards; k++){
        if(cost[i]+cost[j]+cost[k]<=mana){
          // cout<<i<<" "<<j<<" "<<k<<"\n";
          // cout<<cost[i]<<" "<<cost[j]<<" "<<cost[k]<<"\n";
          cout<<names[i]<<" "<<names[j]<<" "<<names[k]<<"\n";
        }
      }
    }
  }
  // for(int it=0; it < deck.size() - 2; it++){
  //   for(map<string,int>::iterator it2 = it+1; it2!=deck.end(); it2++){
  //     for(map<string,int>::iterator it3 = it2+1; it3!=deck.end(); it3++){
  //       // cout<<it->first<<" "<<it->second<<"\n"<<it2->first<<" "<<it2->second<<"\n"<<it3->first<<" "<<it3->second<<"\n\n";
  //       if(it->second+it2->second+it3->second<=mana){
  //         cout<<it->first<<" "<<it2->first<<" "<<it3->first<<"\n";
  //       }
  //     }
  //   }
  // }
  return 0;
}
