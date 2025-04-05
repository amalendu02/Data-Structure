#include<iostream>
#include <unordered_map>
#include<string>

using namespace std;

void countCharacters(unordered_map<char, int> &mapping, string str) {
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        mapping[ch]++;
    }
}
int main () {
    string str = "lovebabbar";
    unordered_map<char, int> mapping;
    countCharacters(mapping,str);

    for(auto i: mapping) {
        cout << i.first << " -> " << i.second << endl;
    }
}