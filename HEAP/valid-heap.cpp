#include<iostream>
using namespace std;

class Info{
    public:
    int maxVal;
    bool isHeap;
    Info(int a, bool b) {
        this->maxVal = a;
        this->isHeap = b;
    }

    Info() {
        maxVal = INT_MIN;
        isHeap = true;
    }
};

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Info checkMaxHeap(Node* root){
    if(root == NULL) {
        Info temp;
        temp.maxVal = INT_MIN;
        temp.isHeap = true;
        return temp;
    }
    if(root->left == NULL && root->right == NULL) {
        Info temp;
        temp.maxVal = root->data;
        temp.isHeap = true;
        return temp;
    }

    // recursion
    Info leftAns = checkMaxHeap(root->left);
    Info rightAns = checkMaxHeap(root->right);
    // 1 case
    if(root->data > leftAns.maxVal && root->data > rightAns.maxVal && leftAns.isHeap && rightAns.isHeap) {
        Info ans;
        ans.maxVal = root->data;
        ans.isHeap = true;
        return ans;
    }
    else {
        Info ans;
        ans.maxVal = max(root->data, max(leftAns.maxVal, rightAns.maxVal));
        ans.isHeap = false;
        return ans;
    }
}
int main () {
    return 0;
}