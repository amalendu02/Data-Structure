#include<iostream>
using namespace std;
int main () {

    int arr[5] = {1,2,3,4,5};

    int* ptr = arr;
    ptr = ptr + 1;
    
    cout << *ptr << endl;



    // pointer case -- 
    // int a = 5;
    // int* p = &a;

    // p = p+1;
    // cout << *p ;
    // -- 
}