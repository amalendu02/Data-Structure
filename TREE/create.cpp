#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }

};

// its return root node of created tree
    Node* createTree() {
        cout << "Enter the valeue: " << endl;
        int data;
        cin >> data;

        // when user giving -1 in input it means NULL
        if(data == -1) {
            return NULL;
        }

        // NEWNODE means ROOT NODE
        // create node
        Node* newNode = new Node(data);

        // create left subtree
        newNode->left = createTree();

        //create right subtree
        newNode->right = createTree();
        return newNode; 
    }
 
int main () {

    Node* root = createTree();
    cout <<" Root Node is: "<<root->data << endl;
    return 0;
}