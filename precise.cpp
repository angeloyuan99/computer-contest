#include<iostream>
#include<math.h>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, int> animals;
    animals.insert(make_pair("Ox", 1));
    animals.insert(make_pair("Tiger", 2));
    animals.insert(make_pair("Rabbit", 3));
    animals.insert(make_pair("Dragon", 4));
    animals.insert(make_pair("Snake", 5));
    animals.insert(make_pair("Horse", 6));
    animals.insert(make_pair("Goat", 7));
    animals.insert(make_pair("Monkey", 8));
    animals.insert(make_pair("Rooster", 9));
    animals.insert(make_pair("Dog", 10));
    animals.insert(make_pair("Pig", 11));
    animals.insert(make_pair("Rat", 12));
     //Ox, Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig, Rat
    map<string, int> month;
    map<string, string> matchups;
    matchups["Bessie"] = "Ox";
    month["Bessie"] = animals[matchups["Bessie"]];
    for(int i = 0; i < n; i++){
        int total = 0;
        string name1, a, b, previous, animal, c, d, name2;
        cin >> name1 >> a >> b >> previous >> animal >> c >> d >> name2;
        int name2month = month[name2];
        matchups[name1] = animal;
        if(previous == "previous"){
            if(animals[matchups[name2]] > animals[matchups[name1]]){
                total += (animals[matchups[name2]] - animals[matchups[name1]]);
            } else{
                total += ((12 - animals[matchups[name1]]) + animals[matchups[name2]]);
            }
        } else{
            if(animals[matchups[name2]] >= animals[animal]){
                total -= ((12 - animals[matchups[name2]]) + animals[matchups[name1]]);
            } else{
                total -= animals[matchups[name1]] - animals[matchups[name2]];
            }
        }
        month[name1] = total + name2month;
      //  cout << "\n" << name1 << " " << month[name1] << "\n" << animals[matchups[name2]] << " " << animals[matchups[name1]];
        // if(name1 == "Elsie"){
        //     if(previous == "Previous"){
        //         if(animals[previousanimal] > animals[animal]){
        //             total += (animals[previousanimal] - animals[animal]);
        //         } else{
        //             total += ((12 - animals[animal]) + animals[previousanimal]);
        //         }
        //     } else{
        //         if(animals[previousanimal] > animals[animal]){
        //             total += ((12 - animals[previousanimal]) + animals[animal]);
        //         } else{
        //             total += animals[animal] - animals[previousanimal];
        //         }
        //     }
        //     cout << total << "\n";
        // }
        // previousanimal = animal;
    }
    cout << abs(month["Elsie"] - 1) << "\n";
}
 //Ox, Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig, Rat, and then Ox again.
//  4
// Mildred born in next Ox year from Bessie
// Gretta born in previous Monkey year from Mildred
// Elsie born in next Ox year from Gretta
// Paulina born in next Dog year from Bessie