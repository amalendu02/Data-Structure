#include<iostream>
using namespace std;

int slowExponential(int a, int b) {
        int ans = 1;

        for(int i=0; i<b; i++) {
            ans *= a;
        }
        return ans;
    }


    // time complexity is o(b)
int main () {
    cout << slowExponential(5,4) << endl;
    return 0;
}