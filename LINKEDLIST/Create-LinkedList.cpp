#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next; 

    Node() {
    // cout <<"constractor called succesfully" << endl;
    this->data = 0;
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

int getLength(Node* head) {
    Node* temp = head;
    int count = 0;

    while(temp != NULL) {
        count++;
        temp = temp -> next;
    }
    return count;
}


void insertAtHead(Node* &head, Node* &tail, int data) {

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
    newNode -> next = head; // attach tail with nw node
    head = newNode; // update tail

    } 
}

void insertAtTail(Node* &head, Node* &tail, int data) {

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

void createTail(Node* &head, Node* &tail) {
    Node* temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    // when this loop will end then tail pointer point last node 
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {

    int length = getLength(head);

    if(position == 1) {
        insertAtHead(head, tail, data);
    }

    else if(position == length + 1) { // if position is length + 1 then i can insert at tail
        insertAtTail(head, tail, data);
    }

    else{
        // inser at midle of linked list

        // step1: create a new node
        Node* newNode = new Node(data);

        // step2: traverse prev // curr to position
        Node* prev = NULL;
        Node* curr = head;

        while(position != 1) {
            prev = curr;
            curr = curr->next;
            position --;
        }
        // step3: attach prev to new Node
        prev -> next = newNode;

        // step4: attach newNode to curr
        newNode -> next = curr; 
    }
}

int main () {

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    PrintL(head);

    insertAtPosition(head, tail, 5, 2);
    PrintL(head);

}