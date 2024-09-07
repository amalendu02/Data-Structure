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

int getLength(Node* head) {
    Node* temp = head;
    int count = 0;

    while(temp != NULL) {
        count++;
        temp = temp -> next;
    }
    return count;
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
    PrintL(head);

    cout << "Length of Linkedlist is: " << getLength(head) << endl;

    return 0;

}