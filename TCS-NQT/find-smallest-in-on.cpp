#include<iostream>
using namespace std;
int findSmallest(int arr[], int n) {
    int min = arr[0];
    for(int i=0; i<n; i++) {
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int main () {
    int arr[5] = {3,2,1,5,6};
    int n= 5;
    int ans = findSmallest(arr,n);
    cout << ans << endl;
}