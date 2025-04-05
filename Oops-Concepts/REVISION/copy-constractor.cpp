#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int age;
    
    Student(string _name, int _age) {
        name = _name;
        age = _age;
    }
    
    // copy constructor 
    Student(const Student &s){
        name = s.name;
        age = s.age;
    }
    
    void display(){
        cout << "My name is " << name << " and my age is "<<age << endl;
    }

};

int main() {
    Student s1("Amalendu", 22);
    Student s2 = s1; // copy constructor called
    s1.display();
    s2.display();
    return 0;
}