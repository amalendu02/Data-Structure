#include<iostream>
using namespace std;

void lastoccLTR(string&s, char x,int i, int&ans) {

    // base case
    if(i >= s.size()){
        return;
    }

    //let solve one solution
    if(s[i] == x){
        ans = i;
    }
    lastoccLTR(s,x,i+1,ans);
}

int main () {
    string s;
    cin >> s;  
    char x;
    cin >> x;
    int ans = -1;
    lastoccLTR(s, x, 0, ans);
    cout << ans << endl;
}