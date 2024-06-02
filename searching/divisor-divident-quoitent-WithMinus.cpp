#include<iostream>
using namespace std;

int quoitent(int divisor, int dividend) {
    int start = 0;
    int end = dividend;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end) {
        if(mid*divisor == dividend) {
            return mid;
        }

        else if(mid*divisor < dividend) {
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
    int dividend = 35;

    int n = -5;
    cout<<abs(n)<<endl;

    int ans = quoitent(abs(divisor),abs(dividend));

    if((divisor>0 && dividend<0) || (divisor<0 && dividend>0)) {
        ans = 0-ans;
    }
    cout << "answer is: " << ans << endl;
   
    

}