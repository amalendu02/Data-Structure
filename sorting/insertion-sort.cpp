#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&v) {
    int size = v.size();
        for(int i=0; i<size; ++i) {
            cout<<v[i] << " ";
        }
        cout << endl;
    }

    void insertionSort(vector<int>&v) {
        int size = v.size();
        // not from i=0; we ignored first element
        for(int i=1; i<size; ++i) {
            int key = v[i];
            int j=i-1;

            while(j >= 0 && v[j] > key) {
                v[j+1] = v[j];
                --j;
            }
            v[j+1] = key; // insertion
        }
    }
 

int main () {
    vector<int> v = {44,33,55,22,11};
    print(v);
    insertionSort(v);
    return 0;
}