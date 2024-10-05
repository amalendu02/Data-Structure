#include<iostream>
using namespace std;

void findmissing(int *arr,int n) {
    for(int i=0; i<n; i++) {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0) {
            arr[index - 1] *= -1;
        }
    }

    for(int i=0; i<n; i++) {
        if(arr[i] >0)
        cout<< i + 1 << " ";
    }
    cout<<endl;
}
int main () {
    int arr[] = {1,3,5,3,4};
    int n = 5;
    findmissing(arr, n);
    return 0;
}