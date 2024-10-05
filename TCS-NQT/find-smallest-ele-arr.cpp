#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sortArr(vector<int>&arr) {
    sort(arr.begin(),arr.end());
    return arr[0];
}
int main () {
    vector<int>arr1={2,5,1,3,0};
    int ans = sortArr(arr1);
    cout << ans << endl;
    return 0;
}