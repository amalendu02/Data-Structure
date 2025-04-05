#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Info {
    public:
    int data;
    int rowIndex;
    int colIndex;

    Info(int row1, int row2, int row3) {
        this->data = row1;
        this->rowIndex = row2;
        this->colIndex = row3;
    }
};

class compare{
    public:
     bool operator()(Info* a, Info* b) {
        return a->data > b->data;
     }
};

void mergeKSortedArrays(int arr[][4], int n, int k, vector<int>&ans) {
    // create priority queue
    priority_queue<Info* ,vector<Info*>, compare>q;

    // 1 step : process firsk k elements
    for(int row = 0; row<k; row++) {
        int element = arr[row][0];
        Info* temp = new Info(element, row, 0);
        q.push(temp);
    }

    while(!q.empty()) {
        Info* temp = q.top();
        q.pop();
        int topData = temp->data;
        int topRow = temp->rowIndex;
        int topCol = temp->colIndex;

        // store in answe
        ans.push_back(topData);

        // next element for same row, which which just pop we have to insert it 
        if(topCol + 1 < n){
            // it means element are present in that row
            Info* newInfo = new Info(arr[topRow][topCol + 1], topRow, topCol+1);
            q.push(newInfo);
        }
    }
}
int main () {
    int arr[3][4] = {
        {1,4,8,11},
        {2,3,6,10},
        {5,7,12,14}
    };

    int n = 4;
    int k = 3;

    vector<int> ans;
    mergeKSortedArrays(arr, n, k, ans);

    cout << "printing ans array: " << endl;
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
