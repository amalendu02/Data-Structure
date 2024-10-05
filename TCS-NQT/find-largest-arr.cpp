#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findlargest(vector<int> &arr) {
    sort(arr.end(),arr.begin());
    return arr[0];
}
int main () {
    vector<int> arr = {2,3,4,5,6,1};
    int n = 6;
    int ans = findlargest(arr);
    cout << ans << endl;
}