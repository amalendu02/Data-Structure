#include<iostream>
using namespace std;

class Stack {
  public:
    int* arr;
    int size;
    int top;
    
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    
    void push(int data) {
      if(top == size-1) {
          cout << "Stack overflow" << endl;
          return;
      }
      else {
          top++;
          arr[top] = data; 
      }
    }
    
    void pop() {
        if(top == -1) {
            cout << "Stack underslow" << endl;
            return;
        }
        else {
            top--;
        }
    }
    
    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    
    int getTop() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else {
            return arr[top];
        }
    }
    
    int getSize() {
        return top+1;
    }
    
    void print() {
        cout << "Top: " << top << endl;
        cout << "Top element: " << getTop() << endl;
        cout << "Stack: ";
        for(int i=0; i<getSize(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl << endl;
    }
};

int main() {
    
    // Static creation
    Stack st(10);
    
    //Push
    st.push(10);
    st.push(30);

    st.print();
    cout << "Top element: " <<st.getTop() << endl;
    cout << "Size of stack is: " << st.getSize() << endl;
    
    if(st.isEmpty()) {
        cout << "Empty" << endl;
    }
    else {
        cout << "Not empty" << endl;
    }
    
    return 0;
    
}