#include<iostream>
using namespace std;
int main () {
    int a = 100;
    int *ptr = & a;

    cout << "a output is " << a << endl;
    cout << "&a output is " << &a << endl;
    // cout << " *a output is " << *a << endl;
    cout << "ptr output is " << ptr << endl;
    cout << "*ptr output is " << *ptr << endl;
    cout << "&ptr output is " << &ptr << endl;
}