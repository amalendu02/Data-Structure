#include<iostream>
using namespace std;

    void findsubsequence(string str, string output, int index) {

        // base case
        if(index >= str.length()) {
            cout <<" -> "<<  output << endl;
            return;
        }

        char ch = str[index];
        // include
        
        findsubsequence(str,output,index+1);

        // exclude
        output.push_back(ch);
        findsubsequence(str,output,index+1);
    }

int main () {

    string str = "abc";
    string output = "";
    int index = 0;

    findsubsequence(str,output,index);
}