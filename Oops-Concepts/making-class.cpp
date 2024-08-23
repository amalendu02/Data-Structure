#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student {
    private:
    int fathername;
    public:
    int age;
    bool present;
    string name;
    string gf;
    int id;
    int nos;
    

    // constractor  - Default constractor
    Student()
    {
        cout << " Student ctor called " << endl;
    }

    // parameterized constractor
    Student(int _id, int _age, bool _present, string _name, int _nos, string _gfname) 
    {
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        gf = _gfname;
        cout << " Student paremeterized ctor called " << endl;
    }

    Student(int _id, int _age, bool _present, string _name, int _nos) 
    {
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
       
        cout << " Student without gf paremeterized ctor called " << endl;
    }

    Student(int id, int age, bool present) {
        this -> id = id;
        this -> age = age;
        this -> present = present;
    }
    // double a;
    // double b;
    // char c;


    void study() {
        cout << "Studying" << endl;
    }

    void sleep() {
        cout << "Sleeping" << endl;
    }

    void repeat() {
        cout << "repeat" << endl;
    }

    private:
    void gfchating() {
        cout << "chatting" << endl;
    }
};
int main () {
    // cout << sizeof(Student) << endl;
    Student s1;

    Student s2(1,12,1,"chota bheem", 1, "chutki");
    cout << s2.name << endl;
    cout << s2.id << endl;
    Student s3(2,15,0,"Maiti", 5);
    cout << s3.name << endl;
    // s1.name = "Amalendu";
    // Student s2;
    return 0;
  
}