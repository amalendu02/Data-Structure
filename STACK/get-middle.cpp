#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&st, int &pos, int &ans) {
    
    // base case
    if(pos == 1) {
        ans = st.top();
        return;
    }

    pos--;
    int temp = st.top();
    st.pop();
    solve(st,pos,ans);
    st.push(temp);

}

int getMiddleEle(stack<int>&st){
    int size = st.size();
    if(st.empty()){
        return -1;
    }
    else {
        int pos = 0;

        if(size & 1) {
            pos = size/2 + 1;
        }
        else {
            pos = size/2;
        }
        int ans = -1;
        solve(st,pos,ans);
        return ans;
    }

}

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int mid = getMiddleEle(st);

    cout <<" Middle element is: " << mid << endl;
}

