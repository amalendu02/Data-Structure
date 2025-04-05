
// stati polymorphism have 2 type 1. function over loading

#include<iostream>
using namespace std;
int add(int a, int b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}

int main() {
    cout << add(3, 5) << endl;
    cout << add(4.5, 6.7) << endl;
}