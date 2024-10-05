#include<iostream>
#include<queue>
using namespace std;
int main () {
    
    // Creation
    queue<int>q;

    // Insertion
    q.push(5);
    q.push(6);
    q.push(4);

    // Size
    int size = q.size();

    // Printing
    cout << "Size of Queue: " << size << endl;

    // Empty
    if(q.empty() == true) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue is Not Empty." << endl;
    }

    // Remove
    q.pop();

    // Size after removing element
    cout << "Size after removing element: " << size << endl;

    // Queue Front Element
    cout << "Front element of Queue is: " << q.front() << endl;
    cout << "Last element of Queue is: " << q.back() << endl;


}