#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n-1;
    int mid = (start + end) / 2;

    while(start <= end) {
        if(arr[mid] == target) {
            return mid;
        }
        else if( target > arr[mid]) {
            start = mid+1;
        }
        else if( target < arr[mid]) {
            end = mid-1;
        }

        // new to update the new mid 
        mid = (start + end) / 2;
    }

    // if we search all array and found nothing , we are here in this block then return -1

    return -1;
}
int main () {
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int target = 30;
    int n = 8;

    int findIndex = binarySearch(arr,n,target);

    if (findIndex == -1) {
        cout << " element not found " << endl;
    }

    else{
        cout << " element found Index No: " << findIndex << endl;
    }
}