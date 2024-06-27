#include<iostream>
using namespace std;
int main () {
    string str1 = "Amalendu";
    string str2 = "Amalendu";

    if(str1.compare(str2) == 0) {
        cout << "Maching" << endl;
    }

    else {
        cout <<" not maching " << endl;
    }
}