#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next; 

    Node() {
    cout <<"constractor called succesfully" << endl;
    this->next = NULL;
    }

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};
 
void PrintL(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << "->";
        temp = temp -> next;
    }
    cout << endl;
}


void insertAttail(Node* &head, Node* &tail, int data) {

    if(head == NULL) {
        // empty ll

        Node* newNode = new Node(data); // create node 
        // step2: single node entire linjkedlit
        // so , head and tail are pointing same node
        head = newNode;
        tail = newNode;
    }

    else {

    Node* newNode = new Node(data); // create newnode
    tail -> next = newNode; // attach tail with nw node
    tail = newNode; // update tail

    }
}

int main () {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node * fifth = new Node(50);
 
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = NULL;

    Node* head = first;
    Node* tail = fifth;
    cout << "printitng entire linkedlist " << endl;
    PrintL(head);


    insertAttail(head, tail, 500);
    PrintL(head);

 
    

    

    return 0;

}