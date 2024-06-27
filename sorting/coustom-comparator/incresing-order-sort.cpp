#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&v) {
    int size = v.size();
    for(int i=0; i<size; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main () {
    vector<int>v = {44,55,22,11};
    sort(v.begin(), v.end());
    print(v);
    return 0;

}