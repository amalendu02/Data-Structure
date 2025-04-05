// #include<iostream>
// using namespace std;

// bool isPalindrome(int x) {

//     if( x < 0 || (x % 10 == 0 && x != 0)) {
//         return false;
//     }

//     int reversedHalf = 0;

//     while(x > reversedHalf) {
//         reversedHalf = reversedHalf * 10 + x % 10;
//         x /= 10;
//     }

//     return x == reversedHalf || x == reversedHalf / 10;
// }

// int main () {
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;

//     if(isPalindrome(num)) {
//         cout << num << " is a palindrom. " << endl;
//     }
//     else {
//         cout << num << " is not a palindrom. " << endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
bool isPalindrom(int n) {
    int result = 0;
    int number = n;
    int q = number;

    while(q != 0) {
    int reminder = q%10;
    result = result*10 + reminder;
    q = q/10;
    }
    return result == number;
}
int main () {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (isPalindrom(n)){
        cout <<"It is Palindrom" << endl;
    }

    else {
        cout <<"It is not a Palindrom" << endl;
    }
    return 0;
}