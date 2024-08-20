#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student {
    int id;
    int age;
    string name;
    int nos;


    void study() {
        cout << "Studying" << endl;
    }

    void sleep() {
        cout << "Sleeping" << endl;
    }

    void repeat() {
        cout << "repeat" << endl;
    }
};
int main () {
    Student s1;
    Student s2;
    return 0;

}