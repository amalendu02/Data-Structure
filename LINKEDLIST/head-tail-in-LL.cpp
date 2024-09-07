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

// to insert data in linkedlist we need to pass it by refrence // remember this it can make mistake
void insertAtHead(Node* &head,Node* &tail, int data) {   

    if(head == NULL) {
        // empty LL

        // step 1 create new node
        Node* newNode = new Node(data);

        //step 2 update head
        head = newNode;
        tail = newNode;
    }

    else {
        // non-empty LL 

        Node* newNode = new Node(data);
        //attach new node to head node
        newNode -> next = head;
        // update head
        head = newNode;
    }
    // create new node
    Node* newNode = new Node(data);
    //attach new node to head node
    newNode -> next = head;
    //update head
    head = newNode;
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
    PrintL(head);

    insertAtHead(head, tail, 500);
    PrintL(head);

    

    return 0;

}