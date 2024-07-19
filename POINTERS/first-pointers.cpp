#include<iostream>
using namespace std;
int main () {
    int a = 5;
    cout << a << endl;
    cout << " address of " << &a << endl;

    int* ptr = &a;
    cout << "Accessing " << *ptr << endl;
}