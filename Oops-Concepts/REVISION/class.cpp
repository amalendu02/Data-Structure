// class is a variable which made by us

#include<iostream>
using namespace std;

class Student{
    public:
    // properties
    int id;
    int age;

    // constructor
    Student(){
        cout << "Student constractor called" << endl;
    }
    
    // method(behaviour)
    void study() {
        cout << "My id is: " << id << " and my age is: " << age << endl;
    }
};

class Person{
    public:
    double a;
    double b;
    char c;
    bool d;
};

int main() {
    Student student1;
    // attribute
    // student1.id = 7517;
    // student1.age = 22;
    // student1.study();
    
    // bool a;
    // cout << sizeof(bool);
    return 0;
}