#include<iostream>
#include<queue>
#include<map>
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

Node* insertintoBst(Node* root, int data) {
    if(root == NULL) {
        root = new Node(data);
        return root;
    }

    // its node the first node
    if(data > root->data) {
        root->right = insertintoBst(root->right, data);
    }
    else {
        root->left = insertintoBst(root->left, data);
    }
    return root; 
}

void CreateBst(Node* &root) { // to track the hole tree we pass the root by reference
    cout << "Enter data:" << endl;
    int data;
    cin >> data;

    while(data != -1) {
        root = insertintoBst(root, data);
        cout << "Enter the data:" << endl;
        cin >> data;
    }
}

void levelOrder(Node* root) {
    if(root == NULL) {
        cout << "empty" << endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }

        else {
            cout << temp->data <<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL) {
                q.push(temp->right);
            }
        }
    }
}


void inorder(Node* root) {
    // LNR
    if(root == NULL)
    return ;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    // NLR
    if(root == NULL)
    return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root) {
    // LRN
    if(root == NULL) 
        return;

        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    
}

Node* minValue(Node* root) {
    if (root == NULL) {
    cout << "No Minimun value" << endl;
    return NULL;
}
    Node* temp = root;

    while(temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

Node* maxValue(Node* root) {
    if(root == NULL) {
        cout << "No Maximum Value" << endl;
        return NULL;
    }

    Node* temp = root;

    while(temp->right != NULL) {
        temp = temp->right;
    }
    return temp;
}

bool searchInBST(Node* root, int target) {
    if(!root){
        cout << "Tree is empty" << endl;
        return false;
    }

    if(root->data == target) {
        return true;
    }

    bool leftAns = false;
    bool rightAns = false;

    if(target > root->data) {
        rightAns = searchInBST(root->right, target);
    }

    else {
        leftAns = searchInBST(root->left, target);
    }

    return rightAns || leftAns;
}

Node* deletefromBST(Node* root, int target) {
    // find target
    // delete target

    if(!root){
        return NULL;
    }

    // if found
    if(root->data == target) {
        // 4 case is there for this

        // CASE 1
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // CASE 2
        else if(root->left != NULL && root->right == NULL) {
            Node* childSubtree = root->left;
            delete root;
            return childSubtree;
        }

        // CASE 3
        else if(root->left == NULL && root->right != NULL) {
            Node* childSubtree = root->right;
            delete root;
            return childSubtree;
        }

        else {
            // a -> found left sub tree max value

            Node* maxi = maxValue(root->left);
            //replacement
            root->data= maxi->data;

            // delete actual maxi node
            root->left = deletefromBST(root->left, maxi->data);
            return root;
        }
    }

    // if not found
    else if(root->data > target) {
        // go left
        root->left = deletefromBST(root->left, target);

    }

    else {
        // go roght
        root->right = deletefromBST(root->right, target);
    }
    return root;
}

int main () {
    Node* root = NULL;
    CreateBst(root);

    levelOrder(root);

    cout << endl << "Inorder: ";
    inorder(root);

    cout << endl << "Preorder: ";
    preorder(root);

    cout << endl << "Postorder: ";
    postorder(root);

    cout << endl;

    Node* minNode = minValue(root);
    if(minNode == NULL) {
         cout << "No Minimum value" << endl;
    }

    else {
        cout << "Minimum value found: " << minNode->data << endl;
    }
    
    cout << endl;

    Node* maxNode = maxValue(root);
    if(maxNode == NULL) {
        cout << "No maximum value " << endl;
    }

    else {
        cout << "Maximum value is: " << maxNode->data << endl;
    }

    // int t;
    // cout << "Enter the target: " << endl;
    // cin >> t;

    // while(t != -1) {
    //     bool ans = searchInBST(root,t);
    //     if(ans == true) {
    //         cout << "Found" << endl;
    //     }
    //     else {
    //         cout << "Not found" << endl;
    //     }

    //     cout << "Enter the target: " << endl;
    //     cin >> t;
    // }


    int target;
    cout << "Enter the value of target: " << endl;
    cin >> target;

    while(target != -1) {
        root = deletefromBST(root, target);
        cout << endl << "Printing Lever Order Traversal: " << endl;
        levelOrder(root);

        cout << "Enter the value of target: " << endl;
        cin >> target;
    }

    return 0;
}