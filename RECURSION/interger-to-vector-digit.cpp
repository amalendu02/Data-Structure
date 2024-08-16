#include<iostream>
#include<vector>
using namespace std;

void vectortoint(int n, vector<int>&ans) {
    
    // base case
    if(n == 0)
    return;

    // processing
    int digit = n % 10;
    n = n/10;

    // recursive call
    vectortoint(n, ans);

    //processing
   ans.push_back(digit);


}

int main () {
    int n = 4215;
    vector<int> ans;
    vectortoint(n,ans);

    for(int num: ans) {
        cout << num << endl;
    }
}