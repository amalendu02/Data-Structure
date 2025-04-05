#include<iostream>
using namespace std;

int solveHCF(int a, int b) {
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main () {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int ans = solveHCF(num1,num2);
    cout << "HCF of "<< num1 << " and " << num2 << " is: " << ans << endl;
    return 0;


}