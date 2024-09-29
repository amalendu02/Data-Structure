#include<iostream>
#include<queue>
using namespace std;
int main () {
    //creation
    queue<int> q;

    //insertion
    q.push(5);

    //size
    cout <<"Size of Queue: " << q.size() << endl;

    //empty
    if(q.empty() == true) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue is not empty" << endl;
    }
}