#include <iostream>
#include <queue>
using namespace std;


bool backtrack(int i, queue<int> &hat, int x){
    for(int j = x; j <= i; j++){
        if(i+1 == hat.front()){
            hat.pop();
            return true;
        }else{
            hat.pop();
        }
    }
    return false;
}


int main() {
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        int x = 0;
        bool condition = true;
        int n;
        cin >> n;
        queue<int> hat;
        int y;
        for (int i = 0; i < n; i++) {
            cin >> y;
            hat.push(y);
        }
        string arr;
        cin >> arr;
        for (int i = 0; i < n; i++) {
            if(arr[i] == '1'){
                if(backtrack(i, hat, x)){
                    x = i + 1;
                }else{
                    cout << i << endl;
                    cout << "No" << endl;
                    condition = false;
                    break;
                }
            }
        }
        if (condition){
            cout << "YES" << endl;
        }

    }

    return 0;
}