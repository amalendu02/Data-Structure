#include<iostream>
using namespace std;
int findLargest(int arr[], int n) {
    int max = arr[0];
    for(int i=0; i<n; i++) {
        if(max < arr[i])
        max = arr[i];
    }
    return max;
}
int main () {
    int arr[] = {2,3,4,5,6,7,1};
    int n = 7;
    int ans = findLargest(arr,n);
    cout << ans << endl;
    return 0;
}