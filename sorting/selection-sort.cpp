#include<iostream>
#include<vector>
using namespace std;


void print (vector<int>&v) {
    int size = v.size();
    for(int i=0; i<size; ++i) {
        cout << v[i] <<" ";
    }
    cout << endl;
}

void selectionSort (vector<int>&v) {
    int size = v.size();
    for(int i=0; i<size-1; ++i) {
        int minimumIndex = i;
        for(int j=i+1; j<size; ++j) {
            if(v[j] < v[minimumIndex]){
            minimumIndex = j;
        }
    }
    swap(v[i], v[minimumIndex]);
}
}


int main () {
    vector<int> v = {44,33,55,22,11};
    print(v);
    selectionSort(v);
    return 0;
}