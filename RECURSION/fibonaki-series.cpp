#include<iostream>
using namespace std;

int fibonaki(int n) {
    // base case

    if(n==0) {
        return 0;
    }

    if(n==1) {
        return 1;
    }

    // recursive relation 
    int ans = fibonaki(n-1) + fibonaki(n-2);
    return ans;
}
int main () {

   cout<<fibonaki(9);
}