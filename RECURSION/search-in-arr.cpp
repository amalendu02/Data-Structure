#include<iostream>
using namespace std;

bool searcharr(int arr[], int size, int key, int index) {

    if(index >= size) 
    return false;

    if(arr[index] == key)
    return true;

    bool ans = searcharr(arr,size,key,index+1);
    return ans;

}
int main () {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int key = 50;
    int index = 0;

    int keyis = searcharr(arr,size,key,index);
    cout << keyis << endl;

    searcharr(arr,size,key, index);
}