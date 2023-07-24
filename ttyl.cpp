#include<iostream>
using namespace std;
int main(){
    string text;
    while(text != "TTYL"){
        cin >> text;
        if(text == "CU"){
            cout << "see you\n";
        }else if(text == ":-)"){
            cout << "I'm happy\n";
        }else if(text == ":-("){
            cout << "I'm unhappy\n";
        }else if(text == ";-)"){
            cout << "wink\n";
        }else if(text == ":-P"){
            cout << "stick out my tongue\n";
        }else if(text == "(~.~)"){
            cout << "sleepy\n";
        }else if(text == "TA"){
            cout << "totally awesome\n";
        }else if(text == "CCC"){
            cout << "Canadian Computing Competition\n";
        }else if(text == "CUZ"){
            cout << "because\n";
        }else if(text == "TY"){
            cout << "thank-you\n";
        }else if(text == "YW"){
            cout << "you're welcome\n";
        }else if(text == "TTYL"){
            cout << "talk to you later\n";
        }
    }
}
// CU	see you
// :-)	I'm happy
// :-(	I'm unhappy
// ;-)	wink
// :-P	stick out my tongue
// (~.~)	sleepy
// TA	totally awesome
// CCC	Canadian Computing Competition
// CUZ	because
// TY	thank-you
// YW	you're welcome
// TTYL	talk to you later