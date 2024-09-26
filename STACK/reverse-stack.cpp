#include<iostream>
#include<stack>
using namespace std;
int main () {
    string str = "Amalendu";

    // create stack
    stack<char>st;

    for(int i=0; i<str.length(); ++i) {
        char ch = str[i];
        st.push(ch);
    }

    while(!st.empty()) {
        cout << st.top() ; // printing stack
        st.pop(); // after printing have to delete the stack
    }
    cout << endl;
    return 0;
}