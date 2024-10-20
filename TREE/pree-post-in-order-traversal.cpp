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
        cout << "Enter the value: " << endl;
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

void preOrderTraversal(Node* root) {

    // base case
    if(root == NULL)
    return;

    // N L R

    // N
    cout << root->data << " ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);

}

void inOrderTraversal(Node* root) {
    // L N R
    // base case
    if(root == NULL) {
        return;
    }

    // L
    inOrderTraversal(root->left);
    // N
    cout << root->data << " ";
    // R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
    // L R N
    if(root == NULL) 
    return;

    // L 
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    //N
    cout << root->data << " ";
}
int main () {
    Node* root = createTree();
    // cout << root->data << endl;
    cout << "Printing PreeOrder: ";
    preOrderTraversal(root);
    cout << endl;
 
    cout << "Printing Inorder: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Printing Postorder: ";
    postOrderTraversal(root);
    cout << endl;
    

    return 0;
}