#include<iostream>
using namespace std;
void lastoccRTL(string&s,char x, int i, int&ans) {
    
    // base case
    if(i >=s.size()) {
        return;
    }

    // lets solve one solution , else recursion will take care
    if(s[i] == x) {
        ans = i;
        return;
    }

    lastoccRTL(s,x,i-1,ans);
}
int main () {
    string s;
    cin >> s;

    char x;
    cin>>x;

    int ans = -1;
    lastoccRTL(s,x, s.size()-1,ans);
    cout << ans;
}