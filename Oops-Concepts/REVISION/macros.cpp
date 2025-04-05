#include<iostream>
using namespace std;

class abc {


#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)

float circleArea(float r)
{
    return 2 * PI * r;
}

void fun()
{
    int x = 6;
    int b = 17;
    int c = MAXX(x, b);
}

void fun2()
{
    int a = 6;
    int b = 17;
    int c = MAXX(a, b);
}

void fun3()
{
    int x = 6;
    int y = 17;
    int c = MAXX(x, y);
}

  abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {
    cout << "in init list" << endl;
  }

int getX() const 
    {
       
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
    int getZ() const
    {
        return z;
    }

};

void printABC(const abc &a)
{
    cout << a.getX() << " "<<a.getY() << " " << a.getZ() << endl;
}

int main() {
    abc a(1,2,3);
    printABC(a);
    return 0;
}