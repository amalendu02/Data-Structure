#include<iostream>
using namespace std;

int quoitent(int divisor, int divident) {
    int start = 0;
    int end = divident;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end) {
        if(mid*divisor == divident) {
            return mid;
        }

        else if(mid*divisor < divident) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main () {
    int divisor = 7;
    int divident = 29;

    int ans = quoitent(divisor,divident);
    cout << "answer is: " << ans << endl;
   
    

}