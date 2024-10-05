#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findSmallest(vector<int>&arr) {
    sort(arr.begin(), arr.end());
    return arr[0];
}

int findLargest(vector<int>&arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}
int main () {
    vector<int>arr = {2,3,4,5,7,1};
    int ans = findSmallest(arr);
    int ans2 = findLargest(arr);

    cout << "smallest element is: " << ans << endl;
    cout << "Largest element is: " << ans2 << endl;
}