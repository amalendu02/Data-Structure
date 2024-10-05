#include<iostream>
using namespace std;
int sumOfAllEle(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main () {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int ans = sumOfAllEle(arr,n);
    cout << "Sum of all Element is: " << ans << endl;
    
}