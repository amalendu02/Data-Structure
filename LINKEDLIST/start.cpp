#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node() {  // default constructor
    cout << "constructor called succesfully called" << endl;
    this -> next = NULL;
    }

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

void printL(Node* head){ // whenever passing pointer in linkedlist using this head pointer you never going to use original pointer(we always create a temp pointer)

  Node* temp = head; // temp pointer // mistake can hapend rember this

  while(temp != NULL) {
    cout << temp->data << "->";
    temp = temp -> next;
  } 
  cout << endl;
}

int main () {

    // creation of node
    // Node a; // static allocation
    
    Node* first = new Node(10); // dynamic allocation
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);


    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    // linked list has been created

    Node* head = first;
    printL(head);





    return 0;

}