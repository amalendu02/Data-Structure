#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
int main () {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int initialSum = 0;
    int ans = accumulate(arr, arr+n, initialSum);
    cout << "Sum of the array is: " << ans << endl;
}