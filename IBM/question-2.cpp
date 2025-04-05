// Consider a string, S, that is a series of characters, each followed by its frequency as an integer.
//The string is not compressed correctly, so there may be multiple occurrences of the same character.
//A properly compressed string will consist of one instance of each character in alphabetical order followed
//by the total count of that character within the string.

#include<iostream>
using namespace std;
int main () {
    string s;
    cout << "Enter the values: ";
    cin >> s;
    int arr[255] = {0}; // initilizing it with 0

    for(int i=0; i<s.size(); i+=2) {
        arr[s[i]] += (s[i+1] - '0'); // it convert char to int
    }
     string ans;

     for(int i=0; i<255; i++) {
        if(arr[i] != 0) {
            ans += i; // to adding i it convert accii value to char
            ans += (arr[i] + '0'); // 0 will convert that integer to char
        }
     }
     cout << ans ;
}