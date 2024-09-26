#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>&st, int element) {
    if(st.empty() || element > st.top()) {
        st.push(element);
        return;
    }

    // case 1
    int temp = st.top();
    st.pop();

    // recursion
    insertSorted(st,element);

    // backtracking
    st.push(temp);
}

void SortStack(stack<int>&st) {
    // base case
    if(st.empty()) 
    return;

    // case 1
    int temp = st.top();
    st.pop();

    // recursion
    SortStack(st);

    // backtracking
    insertSorted(st, temp);
}
int main () {
    stack<int>st;
    
    st.push(5);
    st.push(10);
    st.push(7);
    st.push(12);
    st.push(6);

    SortStack(st);
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;

}