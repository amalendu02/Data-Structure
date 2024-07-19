#include<iostream>
using namespace std;

int factorial(int n) {

    //base case

    if(n == 1) {
        return 1;
    }
    if(n == 0) {
        return 1;
    }

    // processing

    // recursive call

    int ans = n*factorial(n-1);
    return ans;
    // processing
}
int main () {

    cout << factorial(5) << endl;
    return 0;
}