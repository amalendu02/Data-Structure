#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int>findFactors(int n) {
    vector<int>factors;

    // iterate only up to the square root of n
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i == 0) {
            factors.push_back(i);
            if(i != n/i) {
                factors.push_back(n / i);
            }
        }
    }
    return factors;
}
int main () {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if(n <= 0) {
        cout << "factros are defined only for positive integers. " << endl;
        return 0;
    }

    vector<int> factors = findFactors(n);

    cout << "factor of" << n << "are: ";
    for(int i=0; i<factors.size(); i++) {
        cout << factors[i] << " ";
    }
    cout << endl;
    return 0;
}