#include<iostream>
using namespace std;

class Heap{
    public:
     int *arr;
     int capacity;
     int size;

     Heap(int capacity) {
        this->arr = new int[capacity];
        this->capacity = capacity;
        // size = current number of element in heap
        this->size = 0;
     }
 
     void insert(int val) {
        if(size == capacity) {
            cout << "Heap overflow" << endl;
            return;
        }
        // size increase 
        size++;
        int index = size;
        arr[index] = val;


        // take the value to its correct position
        while(index > 1) {
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else {
                break;
            }
        }

     }
     void printHeap() {
        for(int i=1; i<=size; i++) {
            cout << arr[i] <<" ";
        }
     }
};

int main () {
    Heap h(20);
    // insertion
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    cout << "Printing the content for heap" << endl;
    h.printHeap();
    return 0;
}

 // heap time complecity - logn