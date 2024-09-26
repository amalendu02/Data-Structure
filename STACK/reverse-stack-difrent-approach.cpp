#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int& element) {
    // base case
    if(st.empty()) {
        st.push(element);
        return;
    }

    // case 1
    int temp = st.top();
    st.pop();

    //recursion
    insertAtBottom(st,element);

    //backtrack
    st.push(temp);
}

void reverseStack(stack<int> &st) {
    // base case
    if(st.empty()) {
        return;
    }

    // 1case solve
    int temp = st.top();
    st.pop();

    //recursion
    reverseStack(st);

    //backtrack
    insertAtBottom(st,temp);
}
int main () {

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    reverseStack(st);
    cout << "with reverse" << endl;
    while(!st.empty()) {
        cout << st.top() <<" ";
        st.pop();
    }



}