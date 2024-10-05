#include<iostream>
#include<vector>
using namespace std;
void rotateByOne(vector<int>&arr, int n) {
    int temp = arr[0];
    for(int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main () {
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    rotateByOne(arr,n);

    for(int i : arr) {
        cout << i << " ";
    }
    return 0;
}