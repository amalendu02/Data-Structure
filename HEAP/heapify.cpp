// here deletion always from root
// step of deletion 
// 1. replace root node with last node or rightmost node


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


     int deletion() {
        int answer = arr[1];
        //replacement
        arr[1] = arr[size];
        // delete last element from its original position
        size--;

        int index = 1;
        while(index < size) {
            int leftIndex = 2*index;
            int rightIndex = 2*index + 1;

            // findout the largest element
            int largestElementIndex = index;
            // check left child
            if(leftIndex <= size && arr[largestElementIndex] < arr[leftIndex]) {
                largestElementIndex = leftIndex;
            }
            if(rightIndex <= size && arr[largestElementIndex] < arr[rightIndex]) {
                largestElementIndex = rightIndex;
            }

            // no chsnge
            if(index == largestElementIndex) {
                break;
            }
            else {
                swap(arr[index], arr[largestElementIndex]);
                index = largestElementIndex;
            }
        }
        return answer;
     }


};


// heapify

void heapify(int *arr, int n, int index) {
    int leftIndex = 2*index;
    int rightIndex = 2*index+1;
    int largestElementIndex = index;

    // find the max from this three
    if(leftIndex <= n && arr[leftIndex] > arr[largestElementIndex]){
        largestElementIndex = leftIndex;
    }
    if(rightIndex <= n && arr[rightIndex] > arr[largestElementIndex]) {
        largestElementIndex = rightIndex;
    }
    // after these 2 condition largestElementIndex will be pointing towards largest element among 3
    if(index != largestElementIndex) {
        swap(arr[index], arr[largestElementIndex]);
        // now hand over to recursion
        index = largestElementIndex;
        heapify(arr,n,index);
    }
}

void buildHeap(int arr[], int n) {
    for(int index = n/2; index > 0; index--) {
        heapify(arr, n, index);
    }
}

void heapSort(int arr[], int n) {
    while(n != 1) {
        swap(arr[1], arr[n]); // you will do mistake here dont do (n-1) coz array is starting from 1 
        n--; // delete last element
        heapify(arr,n,1);
    }
}

int main () {

    int arr[] = {-1,5,10,15,20,25,12};
    int n = 6; 
    buildHeap(arr,6);
    cout << "Printing heap" << endl;
    for(int i = 1; i <= 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    heapSort(arr,n);
    cout << "Printing sorting heap" << endl;
    for(int i = 1; i <= 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Heap h(20);
    // // insertion
    // h.insert(10);
    // h.insert(20);
    // h.insert(5);
    // h.insert(11);
    // h.insert(6);

    // cout << "Printing the content for heap" << endl;
    // h.printHeap();
    // int ans = h.deletion();
    // cout << "Answer: " << ans << endl;
    // h.printHeap();
    return 0;
}

 // heap time complecity - o(n)

 // to find max or min time will be O(1)

