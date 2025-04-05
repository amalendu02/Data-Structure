#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int &element){
    // BASE CASE
    if(st.empty()) {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    // call recursion
    insertAtBottom(st,element);

    st.push(temp);
}

int main() {
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int element = 500;

    insertAtBottom(st,element);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}