#include<iostream>
#include<queue>
using namespace std;
class Cqueue{
    public:
     int* arr;
     int size;
     int front;
     int rear;

     Cqueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
     }

     void push(int val) {
        // Overflow

        // Empty cse -> first element
        // Circular nature
        // Normal Flow

        // imp line
        if((front == 0 && rear == size-1) || (rear == front - 1)) {
            cout << "Overflow" << endl;
        }
        else if(front == -1 && rear == -1) {
            front ++;
            rear ++;
            arr[rear] = val;
        }
        else if(rear == size-1 && front != 0) {
            rear = 0;
            arr[rear] = val;
        }
        else {
            rear ++;
            arr[rear] = val; 
        }
     }

     void pop() {
        
        if(front == -1 && rear == -1){
            cout << "Underflow" << endl;
        }
        else if(front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1) {
            arr[front] = -1;
            front = 0;
        }
        else {
            arr[front] = -1;
            front++;
        }

        // Underflow
        // singlwElement
        // Circular nature
        // Normal Flow

     }
     void print() {
        cout << "Front" << front << " rear" << rear << endl;
        cout << "Printing Queue: " ;
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
     }
};

int main () {
    Cqueue q(5);
    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    q.push(100);

    q.pop();
    q.pop();
    q.pop();
    q.print();

    q.push(100);
    q.print();

    q.push(110);
    q.print();

    q.push(120);
    q.print();

    q.push(130);
    q.print();


    return 0;
}