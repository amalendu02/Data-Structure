#include<iostream>
#include<vector>
using namespace std;

void find(int arr[], int size, int index, int target, vector<int>&ans) {

    // base case
    if(index >= size)
    return;

    // process
    if(arr[index] == target)
    ans.push_back(index);

    find(arr,size,index+1,target,ans);
    
}
int main () {

    vector<int> arr = {10,20,10,10,30,40};
    int size = 6;
    int index = 0;
    int target = 10;
    vector<int>ans;
}