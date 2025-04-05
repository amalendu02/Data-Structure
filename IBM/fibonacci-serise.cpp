#include<iostream>
using namespace std;
int main () {
    int a = 0;
    int b = 1;
    int c;
    int n;
    int i = 1;

    cout << "Enter the value of n: ";
    cin>>n;
    cout << a << " and " << b << " is" << endl;

    while(i <= n) {
        c = a+b;
        cout << "value of c is:" << c << endl;
        a = b;
        b = c;
        i++;
    }
    return 0;
}