#include<iostream>
#include<math.h>
using namespace std;

// int main () {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     int i=0;
//     int ans = 0;
//     while(n != 0) {
//         int bit = n & 1;

//         ans = (bit * pow(10, i) + ans);

//         n = n >> 1;
//         i++;
//     }

//     cout << " Ans is: " << ans << endl;
// }
    int main () {
        int n;
        cout << "Enter the NUmber:";
        cin >> n;

        string b;
        while( n > 0){
            b +=((n%2) + '0');
            n /= 2;
        }
        reverse(b.begin(), b.end());
        cout << b;
    }
