#include<iostream>
using namespace std;

int findLastIndex(int arr[], int target, int n) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while( start <= end) {
        if(target == arr[mid]) {
            ans = mid;
            // go for right -- reason need to find last occurance
            start = mid + 1;
        }

        else if(target > arr[mid]) {
            start = mid+1;
        }

        else if(target < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int FirstOccurance(int arr[], int target, int n) {
    int start = 0;
    int end = n - 1;
 

    // int mid = (start + end) / 2;

    // best practice
    int mid = start + (end - start) / 2;


    // here we going to store ans in the mid
    int ans = -1; 

    while(start <= end) {
        if(target == arr[mid]) {
            // storing answer
            ans = mid;
            // go in left 
            end = mid-1;
        }

        else if(target > arr[mid]) {
            start = mid + 1;
        }

        else if(target < arr[mid]) {
            end = mid - 1;
        }

        // need to update the mid 
        mid = (start + end) / 2;
    }

    // returning answer
    return ans;
}

int findTotalOccurance(int arr[], int target, int n) {
    int firstOcc = FirstOccurance(arr ,target, n);
    int lastOcc = findLastIndex(arr, target, n);
    int total = lastOcc - firstOcc + 1;
    return total; 
}
int main () {
    int arr[] = {10,20,30,30,30,30,40,50};
    int target = 30;
    int n= 9;

    int ans = findTotalOccurance(arr,target,n);
    cout << " total occurance is : " << ans << endl;
}