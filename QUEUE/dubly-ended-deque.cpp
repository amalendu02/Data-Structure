#include<iostream>
#include<deque>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void pushBack(int val) {

        // Overflow
        //empty case
        // normal flow

        if(rear == size-1) {
            cout << "Overflow" << endl;
        }

        else if(front == -1 && rear == -1) {
            front ++;
            rear ++;
            arr[rear] = val;
        } 
        else {
            rear++;
            arr[rear] = val;
        }
    }

    void pushFront(int val) {
        // overflow
        //empty case -> first element
        // circular queue
        // normal flow

        if((front == 0 && rear == size-1) || (rear == front - 1)) {
            cout << "Overflow" << endl;
        }
        else if(front == -1 && rear == -1) {
            front ++;
            rear ++;
            arr[rear] = val;
        }
        else if(front == 0 && rear != size-1) {
            front = size-1;
            arr[front] = val;
        }
        else {
            front--;
            arr[front] = val;
        }
    }

    void popFront() {
        // underflow
        if(front == -1 && rear == -1) {
            cout << "Queue Underflow" << endl;
            return;
        }
        else if(front == rear) {
            // empty case -> single element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        else {
            // normal case
            arr[front] = -1;
            front++;
        }
    }

    void popBack() {
        // underflow
        //single element
        // normal flow
         
        if(front == -1 && rear == -1){
            cout << "Underflow" << endl;
        }
        else if(front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(rear == 0) {
            arr[rear] = -1;
            rear = size-1;
        }
        else {
            arr[front] = -1;
            front++;
        }
    }

};

int main () {

}
