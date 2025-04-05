#include<iostream>
#include<queue>
#include<map>
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

int searchInorder(int inorder[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(inorder[i] == target) {
            return i;
        }
    }
    return -1;
}

void createMapping(int inorder[], int size, map<int,int>&valueToIndexMap) {
    for(int i=0; i<size; i++) {
        int element = inorder[i];
        int index = i;
        valueToIndexMap[element] = index;
    }
}


Node* constructTreeFromPostInOrderTrav( map<int,int>&valueToIndexMap, int postOrder[], int inorder[], int &postIndex, int inOrderStart, int inOrderEnd, int size) {
    if(postIndex < 0 || inOrderStart > inOrderEnd)
    return NULL;

    // case 1
    int element = postOrder[postIndex];
    postIndex--;
    Node* root = new Node(element);

    // search in inorder
    int position = valueToIndexMap[element];

    // recursion

    // first we will call right

    root->right = constructTreeFromPostInOrderTrav(valueToIndexMap, postOrder, inorder, postIndex, position+1, inOrderEnd, size);

    root->left = constructTreeFromPostInOrderTrav(valueToIndexMap, postOrder, inorder, postIndex, inOrderStart, position-1, size);

    return root;
}
int main () {
    int inorder[] = {8,14,6,2,10,4};
    int postOrder[] = {8,6,14,4,10,2};
    int size = 6;
    int postOrderIndex = size-1;
    int inorderStart = 0;
    int inorderEnd = size-1;
    map<int,int> valueToIndexMap;
    createMapping(inorder, size, valueToIndexMap);

    Node* root = constructTreeFromPostInOrderTrav(valueToIndexMap, postOrder, inorder, postOrderIndex, inorderStart, inorderEnd, size);
    cout << "Printing the emtire tree: " << endl;
    levelorderTraversal(root);

    return 0;

}