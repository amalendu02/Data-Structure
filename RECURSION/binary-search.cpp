#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {

    //base case
    if(start > end) {
        return -1; //return not found
    }


    // processing
    int mid = start + (end-start)/2;
    if(arr[mid] == target) {
        return mid;
    }

    // recursive call
    if(arr[mid] < target) {
        return binarySearch(arr,mid+1,end,target); // go right 
    }

    else {
        return binarySearch(arr,start,mid-1,target); // go left
    }
}

int main () {
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end = size-1;
    int target = 70;

    bool foundIndex = binarySearch(arr,start,end,target);

    if(foundIndex != 0) {
        cout << "Array is found at Index: " << foundIndex << endl;
    }

    else {
        cout << "Array is not found " << endl;
    }
}