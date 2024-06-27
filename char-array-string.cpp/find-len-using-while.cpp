#include<iostream>
using namespace std;
int findlen(char ch[], int size) {
    int length = 0;
    int index = 0;
    while(ch[index] != '\0') {
        length ++;
        index ++;
}
return length;
}
int main () {
    char ch[100];
    // cin >> ch;
    cin.getline(ch,100); 
    int len = findlen(ch, 100);
    cout << " your length is: " << len << endl;
}