#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&v) {
    int size = v.size();
    for(int i=0; i<size; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void bubblesort(vector<int>&v) { // &v means by refrence 
    int n = v.size();
    for(int i=0; i<n-1; ++i ) {
        for(int j=0; j< n-1-i; ++j) {
            if(v[j] < v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
}
int main () {
    vector<int> v = {5,4,3,2,1};
    bubblesort(v);
    print(v);
    return 0;
}