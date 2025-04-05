#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        this->data = value;
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

    // create Node
    Node* root = new Node(value);

    cout << " enterting value for left: " << value << endl;
    root->left = createTree();
    cout << "Entering in right of: " << value << endl;
    root->right = createTree();

    return root;
}


void preOrder(Node* root) {
    if(root == NULL){
        return;
    }

    cout << root->data << endl;
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << endl;
    inOrder(root->right);
}

void postOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << endl;
}

Node* bstFromInOrder(int inorder[], int s, int e) {
    // base case
    if(s > e) {
        return NULL;
    }

    // first case
    int mid = (s+e)/2;
    int element = inorder[mid];
    Node* root = new Node(element);

    // recursion
    root->left = bstFromInOrder(inorder, s, mid-1);
    root->right = bstFromInOrder(inorder, mid+1, e);

    return root;
}

// levelOrder Traversal
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* front = q.front(); // fecthing data
        q.pop();

        cout << front->data << " ";
        
        // inserting front left child
        if(front->left != NULL) {
            q.push(front->left);
        }

        if(front->right != NULL) {
            q.push(front->right);
        }
    }
}


int main () {

    int inorder[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    int start = 0;
    int end = size - 1;
    Node* root = bstFromInOrder(inorder, start, end);

    levelOrderTraversal(root);
    return 0;
}