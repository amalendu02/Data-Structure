#include<iostream>
#include<queue>
using namespace std;
int main () {
    string str = "ababc";
    queue<char>q;
    int freq[26] = {0};

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);


        // find answer
        while(!q.empty()) {
            char frontcharacter = q.front();
            if(freq[frontcharacter-'a'] > 1){
                // means answer is not here
                q.pop();
            }
            else {
                // == 1 case
                // answer is here
                cout << frontcharacter << "->" ;
                break;
            }
        }

        if(q.empty()) {
            cout << "#" << "->";
        }
    }



    return 0;
}