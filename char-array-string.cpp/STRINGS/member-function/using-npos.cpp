#include<iostream>
using namespace std;
int main () {
    string str1 = "I am Amalendu" ;
    string str2 = "am";

    if(str1.find(str2) == string::npos) { // scope resolitution operation
        cout << "Not found" << endl;
    }
    else {
        cout << "Found" << endl;
    }
}