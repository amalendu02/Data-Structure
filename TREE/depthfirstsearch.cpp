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


int main () {
    Node* root = createTree();
    // cout << root->data << endl;

    cout << "Printing Postorder: ";
    levelorderTraversal(root);
    cout << endl;
    return 0;
}