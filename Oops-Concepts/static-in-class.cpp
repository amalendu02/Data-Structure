#include<iostream>
using namespace std;

class abc{
public:
    static int x, y;

    // void print() const {} // can use this as next line with diffrent changes
    static void print(){
        cout << x << " "<< y << endl;
    }

};

// this is a class variable - not that particular class instance variable

int abc::x;
int abc::y;

int main () {
    abc obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print();
    abc obj2;
    obj2.x = 10;
    obj2.y = 20;
    obj1.print();
    obj2.print();
    return 0;
}