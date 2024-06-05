#include<iostream>
using namespace std;

int oddoccuring(int arr[], int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e) {
        if(s == e) { // for single element
            return s;
        }

        if(mid & 1) {
            if(mid-1 >= 0 && arr[mid-1] == arr[mid]) {
                s = mid+1;
            }
            else {
                //for going left
                e = mid-1;
            }
        }
        else {
            //even
            if(mid+1<n && arr[mid+1] == arr[mid]) {
                //right shift
                s = mid+2;
            }
            else{
                e = mid;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main () {
    int arr[] = {1,1,5,5,2,2,3,3,2,4,4};
    int n = 11;
    int ans = oddoccuring(arr,n);

    cout <<" element is: " << arr[ans] << endl;

}