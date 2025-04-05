#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node {
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

void PrintTopView(Node* root) {
    //create map
    map<int,int>hdToNodeMap;
    // create queue
    // to store node and the lebel we use pair
    queue<pair<Node*, int > > q;

    // initial stage of queue
    q.push(make_pair(root, 0));

    while(!q.empty()) {
        pair<Node* ,int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first; // front Node
        int hd = temp.second; // horizonral distance

      // if there is no entry for hd , then create a new entry
        if(hdToNodeMap.find(hd) == hdToNodeMap.end()) {
            hdToNodeMap[hd] = frontNode->data;
        }

        // child

        if(frontNode->left != NULL) {
            q.push(make_pair(frontNode->left, hd-1));
        }

        if(frontNode->right != NULL) {
            q.push(make_pair(frontNode->right, hd+1));
        }
    }
    cout << "Printing top view: " << endl;
    // for each loop
    for(auto i: hdToNodeMap) {
        cout << i.second <<" ";
    }

}

int main() {
    Node* root = createTree();
    PrintTopView(root);
}