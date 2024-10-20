#include<iostream>
#include<queue>
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


int searchInorder(int inorder[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(inorder[i] == target) {
            return i;
        }
    }
    return -1;
}

void levelorderTraversal(Node* root) {
        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        // start traversal
        while(q.size() > 1) {
            Node* front = q.front();
            q.pop();

            if(front == NULL) {
                cout << endl;
                q.push(NULL);
            }

            else {
                // valid Node wala case
                cout << front->data << " ";
                if(front -> left != NULL) {
                    q.push(front->left);
                }
                if(front->right != NULL) {
                    q.push(front->right);
                }
            }
        }
    }


// have to pass preIndex by reference important point
Node* constructTreeFromPreeInOrderTrav(int preOrder[], int inorder[], int &preIndex, int inOrderStart, int inOrderEnd, int size) {

    // base case
    if(preIndex >= size || inOrderStart > inOrderEnd) {
        return NULL;
    }

    // 1 case 
    int element = preOrder[preIndex];
    preIndex++;
    Node* root = new Node(element);

    // have to search element in inorder
    int position = searchInorder(inorder, size, element);

    // other case recursion
    root->left = constructTreeFromPreeInOrderTrav(preOrder, inorder, preIndex, inOrderStart, position-1, size);

    root->right = constructTreeFromPreeInOrderTrav(preOrder, inorder, preIndex, position+1, inOrderEnd, size);

    return root;
}
int main () {
    int inorder[] = {10,8,6,2,4,12};
    int preorder[] = {2,8,10,6,4,12};
    int size = 6;
    int preOrderIndex = 0;
    int inorderStart = 0;
    int inorderEnd = 5;

    Node* root = constructTreeFromPreeInOrderTrav(preorder, inorder, preOrderIndex, inorderStart, inorderEnd, size);
    cout << "Printing the emtire tree: " << endl;
    levelorderTraversal(root);

    return 0;

}