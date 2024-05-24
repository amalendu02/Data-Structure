#include<iostream>
using namespace std;
int main () {
    int student = 0;
    cout<<"Enter the value for student : ";
    cin >> student;

    int assignment = 0;
    cout<<"Enter the value for assignment : ";
    cin >> assignment;

        if (student == assignment) {
            cout<<"Assignment is done"<<endl;
        }
        else if (student > assignment){
            cout<<"Assignment is done , but not submitted" << endl;
        }
        else {jn
            cout<<"Assignment is NOT done"<<endl;
        }
    return 0;
}