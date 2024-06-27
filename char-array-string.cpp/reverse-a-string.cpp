#include<iostream>
using namespace std;

int findlength(char ch[], int size) {
    int length = 0;
    for(int i=0; i<size; ++i) {
        if(ch[i] == '\0') {
            break;
        }
        else{
            length++;
        }
    }
    return length;
}

void findstring(char ch[], int size) {
    int i=0; 
    int j = size - 1;

    while(i<=j) {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
int main () {
    char ch[100];
    cin.getline(ch,100);
    cout <<"before : " << ch << endl;
    int len = findlength(ch,100);
    findstring(ch,len);
    cout << "after : " << ch << endl;
    return 0;
}