#include<iostream>
using namespace std;

void solve(int arr[], int size) {

    *arr = *arr + 1;

}
int main () {
    int arr[] = {10,20,30,40};
    solve(arr,4);

    for(int i=0; i<4; i++) {
        cout << arr[i] <<" ";
    }
    
}