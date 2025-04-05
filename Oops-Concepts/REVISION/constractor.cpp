#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll;
    bool present; 

    Student(string _name, int _age, int _roll, bool _present){
        name = _name;
        age = _age;
        roll = _roll;
        present = _present;
    }

    Student(string name, int age, int roll, int present){
        this->name = name;
        this->age = age;
        this->roll = roll;
        this->present = present;
    }
};


void study()
{

}
int main () {
    
    Student s2("Amalendu Maiti, ", 22, 7517,0);
    Student s3("Maiti", 21, 7388,1);
    cout << s2.name << endl;
    cout << s2.roll << endl;
    cout << s3.roll << endl;
    cout << s3.present << endl;

    // alocating on heap
    Student *s4 = new Student("Bharti", 25, 4408, 1);
    cout << s4->name << endl;
    cout << (*s4).name << endl;

    delete s4; // no LEAK
}