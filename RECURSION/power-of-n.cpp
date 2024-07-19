#include<iostream>
using namespace std;

int power (int n) {
    // base case

    if(n == 0) {
        return 1;
    }

    // recursive relation 
    int ans = 2*power(n-1);
    return ans;
}
int main () {

    cout << power(10) << endl;
}