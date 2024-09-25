#include<iostream>
#include<stack>
using namespace std;
int main () {


// create stack
    stack<int>st;
    // add element
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "size of stack is " << st.size() << endl;

    // remove 
    st.pop();
    

    // check empty  -- for checking empty 2 case is there true or false
    if(st.empty()) {
        cout << "stack is empty" << endl;
    }

    else{
        cout << "stack is non empty" << endl;
    }

    // top element
    cout << st.top() << endl;

    return 0;

}