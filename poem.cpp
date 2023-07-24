#include<iostream>
using namespace std;
string lastsyllable(string input){
    string lastone;
    int vowel = 0;
    for(int i = input.length() - 1; i > -1; i--){
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == ' ' || input[i] =='u'|| input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U'){
            vowel = i;
            break;
        }
    }
    lastone = input.substr(vowel, input.length() - vowel);
    return lastone;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string last[4];
        string words[4];
        for(int j = 0; j < 4; j++){
            string input;
            words[j] = input;
            cin >> ws;
            getline(cin, input);
            for(int k = 0; k < input.length(); k++){
                input[k] = tolower(input[k]);
            }
            last[j] = lastsyllable(input);
        }
        if(last[0] == last[1] && last[1] == last[2] && last[2] == last[3]){
            cout << "perfect\n";
        } else if(last[0] == last[1] && last[2] == last[3]){
            cout << "even\n";
        } else if(last[0] == last[2] && last[1] == last[3]){
            cout << "cross\n";
            cout << words[0] << " " <<  words[1] << " "<< words[2] << " " << words[3] << "\n";
        } else if(last[0] == last[3] && last[1] == last[2]){
            cout << "shell\n";
        } else{
            cout << "free\n";
        }
    }
    return 0;

}
// cross
// perfect
// shell
// even
// even
// 1
// One plus one is small
// one hundred plus one is not
// you might be very tall
// but summer is not
// Output for Sample Input 1

// cross
// Sample Input 2

// 2
// I say to you boo2
// You say boohoo
// I cry too
// It is too much foo
// Your teacher has to mark
// and mark and mark and teach
// To do well on this contest you have to reach
// for everything with a lark
// Output for Sample Input 2
// Copy
// perfect
// shell
// Sample Input 3
// Copy
// 2
// It seems though
// that without some dough
// creating such a bash
// is a weighty in terms of cash
// But how I see
// the problem so fair
// is to write subtle verse
// with hardly a rhyme
// Output for Sample Input 3
// Copy
// even
// free
