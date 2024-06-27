#include<iostream>
using namespace std;
int main () {
    char ch[10]; // creation

    cin >> ch; // inpit
    cout << " printing element: " << ch << endl;
    // loop
    for(int i=0; i<10; ++i) {
        cout << "at index : " << i <<" "<< ch[i] << endl;
     }

     char temp = ch[6];
     int value = (int)temp;
     cout << " printing integer value" << value << endl;
}