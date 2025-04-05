#include<iostream>
using namespace std;
int main () {
    int a = 0;
    int b = 1;
    int c;
    int n;
    int i = 1;
    cout << "Enter the value of n:";
    cin >> n;

    while(i <= n) {
        a = 0;
        b = 1;
        i++;
        for(int j = 1; j<i; j++) {
            c = a+b;
            cout << c <<" " ;
            a = b;
            b = c;
        }
        cout << endl;
    }
    return 0;
}