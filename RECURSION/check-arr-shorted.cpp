#include<iostream>
using namespace std;

bool Shortedarr(int arr[], int size, int index) {

    //base case
    if(index >=size){
        return true;
    }

    // processing
    if(arr[index] >= arr[index - 1]){

        // recursive call
        bool ans = Shortedarr(arr,size,index+1);
        return ans;
    }
    else {
        return false;
    }
}

int main () {
    int arr [] = {10,20,30,40,50,60};
    int size = 6;
    int index = 1;

    bool isShorted = Shortedarr(arr,size,index);

    if(isShorted) {
        cout << "Array is shorted " << endl;
    }
    else{
        cout << "Array is not shorted" << endl;
    }

    return 0;

}