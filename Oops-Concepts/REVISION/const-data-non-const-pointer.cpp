#include<iostream>
using namespace std;

class abc {
    // mutable - by making x mutable we cant change the const x value, mutable use for debuging purpose 
    // int x; 
    mutable int x;
    int *y;

    public: // constructor written old style
    // abc() // it is a constructor
    // {
    //     x = 0;
    //     y = new int(0);
    // }

    // new style to write constructor // initialization list
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)) {}

    // abc(int _x, int _y) // it a constructor
    // {
    //     x = _x;
    //     y = new int(_y);
    // }

    // const use when u dont want to change member variable
    int getX() const 
    {
        x = 10;
        return x;
    }

    void setX(int _val) 
    {
        x = _val;
    }

    int getY() const
    {
        return *y;
    }
  
    void setY(int _val) 
    {
        *y = _val;
    }
};

void printABC(const abc &a){
    cout << a.getX() << " " << a.getY() << endl;
}

int main() 
{
    abc a(1, 2);
    printABC(a);
    return 0;
}



int main2 () {
//     const int x = 5; // x is constant.
//     // initialization can be done.
//     // but we can't re-assign value.
//     x = 10;
//     cout << x << endl;

//     2. const with pointers
// const int *a = new int(2); // const data , non const pointer
// int const *a = new int(2); // same as 11 line
// cout << *a << endl;
// // *a = 20;
// int b = 20;
// a = &b;
// cout << *a << endl;


   // CONST Pointer, but NON-Const  
   int * const a = new int(2);
   cout << *a << endl;
   *a = 20;
   cout << *a << endl;


   return 0;
   }