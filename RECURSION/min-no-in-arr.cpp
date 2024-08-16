#include<iostream>
#include<limits.h>
using namespace std;

// here i cant pass the mini by value , i have to pass it by refrence coz by value means copy the address 
void findMin(int arr[], int size, int index, int &mini) {

    // base case
    if(index >= size)
    return;

    // porcessing
    mini = min(mini, arr[index]);

    // recursive call

    findMin(arr,size,index+1,mini);
}

int main () {
    int arr[] = {10,20,30,40,5,11};
    int size = 6;
    int index = 0;
    int mini = INT_MAX;

    findMin(arr,size,index,mini);
    cout << "Minimum number in array: " << mini << endl;
}