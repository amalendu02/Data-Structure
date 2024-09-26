#include<iostream>
#include<stack>
using namespace std;

void insertAtSorted(stack<int>&st, int element) {
    // base case
        if(st.empty() || element > st.top()) {  // first check stack is empty or not
        st.push(element);
        return;
    }

    // case 1
    int temp = st.top();
    st.pop();

    // recursion
    insertAtSorted(st,element);

    // backtracking'
    st.push(temp);
}
int main () {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    insertAtSorted(st, 25);
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}