#include<iostream>
#include<queue>
using namespace std;

int getKthSmallestElement(int arr[],int n, int k) {
    priority_queue<int>q;
    // first process k element
    for(int i=0; i<k; i++) {
        int element = arr[i];
        q.push(element);
    }
    // we will push remaning element when element are smaller than root
    for(int i=k; i<n; i++) {
        int element = arr[i];
        if(element < q.top()) {
            q.pop();
            q.push(element);
        }
    }
    int ans = q.top();
    return ans;
}

int main () {
    int arr[] = {3,5,4,6,9,8,7};
    int n = 7;
    int k = 4;
    int result = getKthSmallestElement(arr,n,k);
    cout << "4th smallest element is: " << result << endl;
    return 0;
}