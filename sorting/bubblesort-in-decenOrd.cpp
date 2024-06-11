#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&v) {
    int size = v.size();
    for(int i=0; i<size; ++i) {
        cout << v[i] << " ";
    }
    cout<<endl;
}

void bubblesort(vector<int>&v) {
    int n = v.size();
    for(int i = 0; i<n-1; ++i ) {
        for(int j = i-1; i<n-1-j; ++j) {
            if (v[j-1] > v[j]) {
                swap(v[j-1], v[j]);
            }
        }
    }
}

int main () {
    vector<int> v = {1,2,3,4,5};
    bubblesort(v);
    print(v);
    return 0;
}