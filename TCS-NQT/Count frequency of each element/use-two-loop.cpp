#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findFrequency(int arr[], int n) {
    vector<bool> visited(n,false);
    for(int i=0; i<n; i++) {
        if(visited[i] == true)
        continue;

        int count = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]){
                visited[j] == true;
                count++;
            }
        }
        cout << "For " <<  arr[i] <<" Count is: " << count << endl;
    }
}
int main () {
    int arr[] = {10,5,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    findFrequency(arr,n);
    return 0;
}