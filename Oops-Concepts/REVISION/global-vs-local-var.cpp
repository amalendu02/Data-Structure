#include<iostream>
using namespace std;

int x = 2; // GLOBAL VARIABLE

void fun() {
    int x = 60;
    cout << x << endl;
    ::x = 40;
    cout << ::x << endl;
}

int main () {
    ::x = 400; // global x
    int x = 20; // LOCAL TO main() FUNCTION
    cout << x << endl; 
    cout << ::x << endl; // TO PRINT GLOBAL VARIABLE WE HAVE TO USE ::

    {
        // STARTED NEW SCOP
        int x = 50;
        {
            // inside scope
            int x = 44;
            cout << x << endl;
        }
        cout << x << endl;
        cout << ::x << endl;
    }

    fun();
    return 0;
}