#include<iostream>
using namespace std;

int getKthLargestElement(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int> >q;
    // first process k element
    for(int i=0; i<k; i++) {
        int element = arr[i];
        q.push(element);
    }
    // will insert remaining element when they are larget than root 
    for(int i=k; i<n; i++) {
        int element = arr[i];
        if(element > q.top()) {
            q.pop();
            q.push(element);
        }
    }
    int ans = q.top();  
    return ans;
}
int main () {
    int arr[] = {3,2,5,7,8,9,1};
    int n = 7;
    int k = 3;
    int result = getKthLargestElement(arr, n, k);
    cout << "3rd largest element is: " << result << endl;
    return 0;
}