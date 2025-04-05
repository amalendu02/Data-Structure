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

    void inorder(Node* root) {
        if(root == NULL) {
            return;
        }

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);

    }

Node* bstFromInorder(int inorder[], int start, int end) {
    if(start > end) {
        return nullptr;
    }

    int mid = (start + end) / 2;
    Node* root = new Node(inorder[mid]);

    root->left = bstFromInorder(inorder,start, mid-1);
    root->right = bstFromInorder(inorder, mid+1, end);

    return root;
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

// convert this BST into a sorted Doubly linked list

void convertBSTtoDLL(Node* root, Node* &head) {
    if(root == NULL) {
        return;
    }

    // RNL

    //R
    convertBSTtoDLL(root->right, head);  

    //N
    root->right = head;
    if(head != NULL)
    head ->left = root;
    head = root;

    //L
    convertBSTtoDLL(root->left, head);
}

Node* convertDLLtoBST(Node* &head, int n) {
    // base case 
    if(head == NULL || n <= 0) {
        return NULL; 
    } 

    // LNR
    // L
    Node* leftSubtree = convertDLLtoBST(head, n/2);

    // N
    Node* root = head;
    root->left = leftSubtree;
    // head update
    head = head->right;

    // R
    Node* rightSubTree = convertDLLtoBST(head, n-n/2-1);
    root->right = rightSubTree;
    return root;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    cout << "Printing the entire list: " << endl;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->right;
    }
    cout << endl;
}
 

int main() {

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->right = second;
    second->left = first;
    second->right = third;
    third->left = second;

    Node* head = first;
    // 10<->20<->30

    Node* root = convertDLLtoBST(head, 3);
    levelorderTraversal(root);





    // int inorder[] = {10,20,30,40,50,60,70};
    // int size = 7;
    // int start = 0;
    // int end = size - 1;
    // Node* root = bstFromInorder(inorder, start, end);

    // levelorderTraversal(root);
    // cout << endl;

    // Node* head = NULL;
    // convertBSTtoDLL(root, head);
    // printLinkedList(head);
}