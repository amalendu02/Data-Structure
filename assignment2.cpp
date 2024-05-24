#include<iostream>
#include<string>
using namespace std;
int main() {
    bool isSubmitted = false;
    bool isAssignment = false;

    if(isSubmitted && isAssignment) {
        cout<<"Assignment is done" <<endl;
    }

    else if(isSubmitted && !isAssignment) {
        cout<<"Assignment is done but not submited" <<endl;
     }

     else {
        cout<<"Assignment is not done" << endl;
     }
     return 0;
}