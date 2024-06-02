#include<iostream>
using namespace std;

int missingElement (int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    

    while(start <= end) {
        int diffrence = arr[mid] - mid;
        if(diffrence == 1) {
            start = mid + 1;
        }

        else {

            // here we need to store the element in answer
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }

    // hww
    if(ans +1 ==0) {
        return n+1;
    }
    return ans+1;
}
int main () {
    int arr[] = {1,2,3,4,5,7,8};
    int n = 7;

    int missing = missingElement(arr,n);
    cout << " missing no at index No. " << missing << endl;
}
