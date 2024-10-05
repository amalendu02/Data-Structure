#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    cout << "The reverse array is" << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] <<" ";
    }
}

void reverseArray(int arr[], int n) {
    reverse(arr, arr+n);
}
int main () {
    int n=5;
    int arr[] = {5,4,3,2,1};
    reverseArray(arr,n);
    printArray(arr,n);
    return 0;
}