#include<iostream>
using namespace std;

// void converttouppercase(char ch[], int n) {
//     int index=0;

//     while(ch[index] != '\0') {
//         char currentcharacter = ch[index];

//         if(currentcharacter >='a' && currentcharacter <='z') {
//             ch[index] = currentcharacter-'a'+'A';
//         }
//         index ++;
//     }
// }


// if you dont want to use currentcharacter can use index 

void convertUpper(char ch[], int n) {
    int index = 0;

    while(ch[index] != '\0') {
        if(ch[index] >= 'a' && ch[index] <='z') {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index ++;
    }
}
int main () {
    char ch[100];
    cin.getline(ch,100);

    cout << " Before " << ch << endl;
    // converttouppercase(ch,100);
    convertUpper(ch,100);
    cout << " after - " << ch << endl; 
}