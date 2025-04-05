#include<iostream>
#include<queue>
using namespace std;
int main () {

    // min heap creation // here int define data type , vector define container where data will be stored, compare function - which place data will be stored
    priority_queue<int, vector<int>, greater<int> > q;
    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Top element of heap: " << q.top() << endl;
    q.pop();
    cout << "Top element of heap: " << q.top() << endl;

    if(q.empty()) {
        cout << "Empty" << endl;
    }
    else {
        cout << "Not Empty" << endl;
    }
    return 0;
}