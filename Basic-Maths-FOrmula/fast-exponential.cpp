#include<iostream>
using namespace std;

int fastexponential(int a, int b) {
    int ans = 1;
    while(b>0) {
        if(b&1) {
            //odd
            ans = ans*a;
        }
        a = a*a;
        b>>=1; // b = b/2
    }
    return ans;
}

// o(logb)
int main () {
    cout << fastexponential(5,4) << endl;

    return 0;
}