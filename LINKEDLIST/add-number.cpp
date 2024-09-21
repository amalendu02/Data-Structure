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

void insertAtHead(Node* &head, Node* &tail, int data) {

    // ll is empty
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // ll is not empty
    Node* newNode = new Node(data);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;

}

Node* reverse(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void addOne(Node* &head) {
    // reverse
    head = reverse(head);
    // add 1
    int carry = 1;
    Node* temp = head; // for traversel we slould take temp for good practice
    while(temp->next != NULL) {
        int totalSum = temp->data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;

        temp->data = digit;
        temp = temp->next;
        if(carry == 0) {
            break;
        }
    }

    // process last node
    if(carry != 0) {
    int totalSum = temp->data + carry;
    int digit = totalSum % 10;
    carry = totalSum / 10;

    temp->data = digit;
    if(carry != 0) {
        Node* newNode = new Node(carry);
        temp->next = newNode;
    }
    }
    // reverse

    head = reverse(head);

}


int main () {

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 9);
    insertAtHead(head, tail, 9);
    insertAtHead(head, tail, 9);
    print(head);
    cout << endl;

    addOne(head);
    print(head);
    cout << endl;




    return 0;

}