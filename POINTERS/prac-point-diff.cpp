#include<iostream>
using namespace std;

void solved(int* arr, int size) {
    cout <<"Inside solve -> arr: " << arr << endl;
    cout << "Inside solve -> &arr " << &arr << endl; 
}
int main () {
    int arr[] = {10,20,30,40,50};
    solved(arr,5);

    cout <<"Inside main -> arr:" << arr << endl;
    cout << "Inside main -> &arr" << &arr << endl;
}