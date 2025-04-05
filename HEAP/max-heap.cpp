#include<iostream>
#include<queue>
using namespace std;
int main () {
    // create max heap
    priority_queue<int>q;
    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Top Element of Heap: " << q.top() << endl;
    q.pop();
    cout << "Top Element of heap: " << q.top() << endl;

    cout << "Size of max heap: " << q.size() << endl;

    if(q.empty()) {
        cout << "Empty" << endl;
    }
    else {
        cout << "Not Empty" << endl;
    }
    return 0;
}