#include<iostream>
using namespace std;

int findarray(int arr[], int size, int target, int index) {
    
    // base case 
    if(index >= size)
    return -1;

    // processing

    if(arr[index] == target)
    return index;

    int ans = findarray(arr,size,target, index + 1);
    return ans;
}

int main () {
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index = 0;
    int target = 50;

    int targetis = findarray(arr,size,target,index);
    cout << "The answer is : " << targetis << endl;
}