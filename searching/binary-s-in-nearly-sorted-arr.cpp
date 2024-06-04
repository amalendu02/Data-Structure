#include<iostream>
using namespace std;

int findtarget(int arr[], int n, int target) {
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;

    while(s<=e) {
        if(mid-1>=0 && arr[mid-1] == target) {
            return mid-1;
        }

        if(arr[mid] == target) 
        return mid;

        if(mid+1 <n && arr[mid+1] == target) 
        return mid+1;

        if(arr[mid] < target) {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s +(e-s)/2;
    }
    return -1;
}
int main () {
    int arr[] = {20,10,30,50,40,70,60};
    int n = 7;
    int target = 70;

    

    int index = findtarget(arr,n,target);

    if(index == -1) {
        cout << "elemt not found" << endl;
    }

    else{
        cout << "element found at index: "<< index << endl;
    }
}