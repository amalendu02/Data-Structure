#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string & str) {
     stack<char>st;

     for(int i=0; i<str.length(); i++) {
        char ch = str[i];

        if(ch == '(' || ch=='-' || ch=='+' ||ch == '*' || ch == '/') {
            st.push(ch); 
        }

        else if(ch == ')') {
            int operatorCount = 0;
            while(!st.empty() && st.top() != '(') {
                char temp = st.top();
                if(temp == '+' || temp == '-' || temp == '*' || temp == '/') {
                    operatorCount++;
                }
                st.pop();
            }

            // you reached this line means
            // stack top have one opening bracket
            st.pop();

            if(operatorCount == 0)
            return true;
        }
     }
     // i reached this line it means
     // every bracket pair have one operator
     return false;
}

int main () {

    string str = "(((a+b)*(a+b)))";
    bool ans = checkRedundant(str);

    if(ans == true) {
        cout <<"Redundant Brackets Present" << endl;
    }

    else {
        cout <<"Redundant Brackets Not Present" << endl;
    }

    return 0;
}