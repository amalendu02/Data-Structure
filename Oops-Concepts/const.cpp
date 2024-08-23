#include<iostream>
using namespace std;
int main () {
    // int *a = new int;
    // *a = 2;
    // cout << *a << endl;
    // int b = 5;
    // a = &b;
    // cout << *a << endl;

    //2. const with pointers
    // const int *a = new int (2); // const data, non-const pointer
    // int const *a = new int(2); // same as line no 13
    // // if i write const before *, then content will be const 
    // cout << *a << endl;
    // // *a = 20; // can't change the content of pointer
    
    // int b= 20;
    // a = &b; // pointer itself can be reassigned.
    // cout << *a << endl;


    // const pointer, but non-const data
    // int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20; // cant run
    // cout << *a << endl;    // int b=50;
    // // a = &b; // const pointer 

    // CONST DATA, CONST POINTER

    // const int *const a = new int(a);
    // cout << *a << endl;
    // *a = 50;
    // int b = 100;
    // a = &b;
    return 0;

}