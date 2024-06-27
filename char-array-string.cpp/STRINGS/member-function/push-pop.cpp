#include<iostream>
using namespace std;
int main () {
    string name = "Love";
    cout << name << endl;
    name.push_back('R');
    cout << name << endl;

    name.pop_back();
    cout << name << endl;
}