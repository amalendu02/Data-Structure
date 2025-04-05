#include<iostream>
#include<string>
using namespace std;

class Student{


private:
    string gf;

    public:
    string name;
    int age;
    
    Student(string _name, int _age, string _gf) {
        name = _name;
        age = _age;
        this->gf = _gf;
    }
    
    // copy constructor 
    Student(const Student &s){
        name = s.name;
        age = s.age;
    }

    // getter / setter
    string getprivateclass()
    {
        return gf;
    }

    // setter
    void setprivateclass(string gf)
    {
        this->gf = gf;
    }
    
    void display(){
        cout << "My name is " << name << " and my age is "<<age << endl;
    }

    // distructor start with ~
    ~Student()
    {
        cout << "Student dto called" << endl;
    }


private:
    void privateclass()
    {
        cout << "private class" << endl;
    }

};

int main() {
    
    
    Student s1("Amalendu", 22, "AD");
    s1.display();
    cout << s1.name << endl;
    cout << s1.getprivateclass() << endl;

    s1.setprivateclass("MsMaiti");

    cout << s1.getprivateclass() << endl;

    return 0;
}