#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node() {
       this -> prev = NULL;
       this -> next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int findLength(Node* &head) {
    Node* temp = head;
    int len = 0;

    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data) {

    // ll is empty
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    // ll is not empty
    Node* newNode = new Node(data);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;

}


int main () {

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    print(head);
    


    return 0;

}