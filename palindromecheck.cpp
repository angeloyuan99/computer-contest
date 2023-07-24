#include<iostream>
#include<math.h>
#include<string>
using namespace std;
string switchback(string a, int base){
    string total;
    int dividend = stoi(a) / base, modulus = stoi(a) % base;
    while(dividend != 0){
        if(modulus == 10){
            total = 'A' + total;
        } else if(modulus == 11){
            total = 'B' + total;
        } else if(modulus == 12){
            total = 'C' + total;
        } else if(modulus == 13){
            total = 'D' + total;
        } else if(modulus == 14){
            total = 'E' + total;
        } else if(modulus == 15){
            total = 'F' + total;
        } else{
            total = to_string(modulus) + total;
        }
        modulus = dividend % base;
        dividend = dividend / base;
    }
    if(modulus == 10){
            total = 'A' + total;
        } else if(modulus == 11){
            total = 'B' + total;
        } else if(modulus == 12){
            total = 'C' + total;
        } else if(modulus == 13){
            total = 'D' + total;
        } else if(modulus == 14){
            total = 'E' + total;
        } else if(modulus == 15){
            total = 'F' + total;
        } else{
            total = to_string(modulus) + total;
        }
    return total;
}
int switchbase(string a, int base){
    int total = 0;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == 'A'){
            total += 10 * pow(base, (a.length() - i - 1));
        } else if(a[i] == 'B'){
            total += 11 * pow(base, (a.length() - i - 1));
        } else if(a[i] == 'C'){
            total += 12 * pow(base, (a.length() - i - 1));
        } else if(a[i] == 'D'){
            total += 13 * pow(base, (a.length() - i - 1));
        } else if(a[i] == 'E'){
            total += 14 * pow(base, (a.length() - i - 1));
        } else if(a[i] == 'F'){
            total += 15 * pow(base, (a.length() - i - 1));
        } else if(a[i] == 'G'){
            total += 16 * pow(base, (a.length() - i - 1));
        } else{
            int add = a[i] - '0';
            total += add * pow(base, (a.length() - i - 1));
        }
    }
    return total;
}

string reverse(string str) { 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++){
        swap(str[i], str[n - i - 1]);
    } 

    return str;
} 
bool isPalindrome(string str){
	int low = 0;
	int high = str.length() - 1;
	
	while (low < high){
		if (str[low] != str[high])
			return false;

		low++;
		high--;
	}
	
	return true;
}
int main(){
    string a;
    int base;
    cin >> a;
    cin >> base;
    int counter = 0;
    while(!isPalindrome(a) && counter != 10){
        a = to_string(switchbase(a, base) + switchbase(reverse(a), base));
        a = switchback(a, base);
        counter++;
    }
    if(isPalindrome(a) == true){
        cout << a << "\n";
    } else{
        cout << "NONE, " << a << "\n";
    }
}