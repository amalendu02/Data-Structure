#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>&st, int element){

    // BASE CASE
    if(st.empty() || element > st.top()){  // remember this step --
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    // RECURSION
    insertSorted(st,element);

    // BACKTRACK
    st.push(temp);

}

void sortStack(stack<int>&st) {
    
    // BASE CASE
    if(st.empty()){
        return;
    }

    int temp = st.top();
    st.pop();

    sortStack(st);

    insertSorted(st,temp);
}

int main() {

    stack<int>st;

    st.push(1);
    st.push(5);
    st.push(3);
    st.push(4);

    sortStack(st);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

}