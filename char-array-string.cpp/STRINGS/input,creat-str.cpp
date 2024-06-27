#include<iostream>
using namespace std;
int main () {
    string name ; // creation of class

    getline(cin,name); // string variable n name 
    
    cout << "printing name" << name << endl;
    cout << "printing first character" << name[0] << endl;

    int index = 0;

    while(name[index] != '\0') {
        cout << " index: " << index << " character " << name[index] << endl;
        index ++;
    }
}