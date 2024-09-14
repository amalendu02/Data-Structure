#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        cout << "Distructor called for " << this->data << endl; // this how distructure made of
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



int findLength(Node* head) {
    Node* temp = head;
    int count = 0;

    while(temp != NULL) {
        count++;
        temp = temp -> next;
    }
    return count;
}

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

void deleteNode(Node* &head, Node* &tail, int position) {
    // empty list
    if(head == NULL) {
        cout << "Cannot delete, Coz LinkedList is empty" << endl;
        return;
    }

    int len = findLength(head);

    // delete from head
    if(position == 1) {

        // delete first node

        Node* temp = head;
        head  = head->next;
        temp->next = NULL;
        delete temp;  // when we are deleting any dynamically allocated node the distructer called 
    }

    else if(position == len) {
        // delete last node

        
        // find prev Node
        Node* prev = head;
        while(prev -> next != tail) {
            prev = prev -> next;
        }

        //link prev node will NULL
        prev -> next = NULL;
        delete tail; // delete tail
        tail = prev; // update tail
    }

    else {
        // delete any middle node

        // set - prev/curr pointers
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1) {
            position--;
            prev = curr;
            curr = curr->next;
        }

        // prev->next = curr node
        prev -> next  = curr -> next;

        // isolate node
        curr->next = NULL;

        // delete node
        delete curr;

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
    cout << endl;

    deleteNode(head, tail, 5);
    PrintL(head);
    cout << endl;

    return 0;
}