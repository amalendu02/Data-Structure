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
int main () {
    int arr[] = {10,20,30,30,30,30,40,50,60};
    int target = 30;
    int n = 9;

    int LastOcc = findLastIndex(arr,target,n);

    if(LastOcc == -1) {
        cout << "Element not found"<< endl;
    }

    else{
        cout<<"Element Found at Index: " << LastOcc << endl;
    }


}