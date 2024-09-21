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
        return;
    }

    // ll is not empty
    Node* newNode = new Node(data);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;

}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else {
        // LL is non empty
        Node* newNode = new Node(data);
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode; 
    }
}


void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else {
        int len = findLength(head);
        if(position == 1) {
            insertAtHead(head, tail, data);
        }

        else if(position == len+1) {
            insertAtTail(head, tail, data);
        }
        else {
            // insert in middle
            // step1: create node
            Node* newNode = new Node(data);
            // step1: set prev and curr pointer
            Node* prevNode = NULL;
            Node* currNode = head;

            while(position != 1) {
                position --;
                prevNode = currNode;
                currNode = currNode->next;

            }

            // step3 pointers update 
            prevNode -> next = newNode;
            newNode -> prev = prevNode;
            newNode -> next = currNode;
            currNode -> prev = newNode;
        }
    }
}

void deleteNode(Node* &head, Node* &tail,int position) {
    if(head == NULL) {
        //LinkedList is empty
        cout << "Cannot delete, coz LL is empty" << endl;
        return;
    }

    if(head == tail) {
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }

    int len = findLength(head);
    if(position == 1) {
        // delete from head
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        head -> prev = NULL;
        delete temp;
    }

    else if(position == len) {
        // delete from tail
        Node* prevNode = tail -> prev;
        prevNode->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prevNode;
    }
 
    // delete from mid
    else {
        // step1: set prevNode/currNode/ nextNode
        Node* prevNode = NULL;
        Node* currNode = head;
        while(position != 1) {
            position --;
            prevNode  =currNode;
            currNode = currNode->next;
        }
        Node* nextNode = currNode->next;

        prevNode->next = nextNode;
        currNode->prev = NULL;
        currNode->next = NULL;
        nextNode->prev = prevNode;

        delete currNode;
    }
}

Node* getStartingPoint(Node* &head) {
    // cheack for loop
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        if(fast == slow){
            break;
        }
    }

    if(fast == NULL) {
        return NULL;
    }

    // reached this section it means
    slow = head;

    // slow and fast one next step
    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    // can return any one fast or slow coz both are in same place
    return slow;

}


int main () {

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    print(head);
    cout << endl;

    deleteNode(head,tail,3);
    print(head);


    return 0;

}