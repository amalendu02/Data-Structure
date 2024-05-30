#include<iostream>
using namespace std;

int FirstOccurance(int arr[], int target, int n) {
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
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
int main () {
    int arr[] = {10,20,30,30,30,30,60,70};
    int target = 30;
    int n = 8;

    int ansIndex = FirstOccurance(arr,target,n);

    if(ansIndex == -1) {
        cout<<"element not found"<<endl;
    }

    else {
        cout << " element found at Index : " << ansIndex<<endl;
    }

    return 0;
}