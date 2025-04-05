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

Node* createTree() {
    cout << "Enter the value for Node: " ;
    int value;
    cin >> value;

    if(value == -1) {
        return NULL;
    }

    // create node
    Node* root = new Node(value);

    cout << " Entering in left of: " << value << endl;
    root->left = createTree();
    cout << "   Entering in right of: " << value << endl;
    root->right = createTree();
    return root;
}

void printLeftBoundary(Node* root) {
    if(root == NULL)
    return;

    if(root->left == NULL && root->right == NULL)
    return;

    cout << root->data <<" ";
    if(root->left != NULL)
    printLeftBoundary(root->left);

    else{
        printLeftBoundary(root->right);
    }
}

void printLeafBoundary(Node* root) {
    if(root == NULL)
    return;

    if(root->left == NULL && root->right == NULL)
    cout << root->data <<" ";

    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root) {
    if(root == NULL)
    return;

    if(root->left == NULL && root->right == NULL) {
        return;
    }
    
    if(root->right != NULL) {
        printRightBoundary(root->right);
    }

    else {
        printRightBoundary(root->left);
    }
    cout << root->data <<" ";
}

// void BoundaryTraversal(Node* root) {
//     if(root == NULL)
//     return;

//     printLeftBoundary(root);
//     printLeafBoundary(root);

//     // for not write root 2 times
//     if(root->right != NULL){
//         printRightBoundary(root->right);
//     }

//     else
//     printRightBoundary(root->left);
// }
void BoundaryTraversal(Node* root) {
    if(root == NULL)
    return;

    cout << root->data<< " ";
    printLeftBoundary(root->left);
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
    printRightBoundary(root->right);

}

int main () {

    Node* root = createTree();

    BoundaryTraversal(root);


}