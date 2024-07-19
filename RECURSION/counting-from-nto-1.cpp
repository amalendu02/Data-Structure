#include<iostream>
using namespace std;

void printcounting(int n) {

    // base case
    if(n==1) {
        cout << 1 << endl;
        return;
    }

    // processing
    cout << n << " ";

    //recursion call
    printcounting(n-1);

}
int main () {

    printcounting(5);
}