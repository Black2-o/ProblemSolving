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


bool ishappy(int n,  queue<int> hat, string arr) {
        int x = 0;

        for (int i = 0; i < n; i++) {
            // cout << "From Top "<< arr[i] << endl;
            if(arr[i] == '1'){
                if(backtrack(i, hat, x)){
                    x = i + 1;
                }else{
                    return false;
                }
            } else{
            }
    }
    return true;
}



int main() {
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        int n;
        cin >> n;
        queue<int> hat;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            hat.push(x);
        }
        string arr;
        cin >> arr;

        if (ishappy(n, hat, arr)){
            cout << "YES" << endl;
        }else{
            cout << "No" << endl;
        }

    }



    return 0;
}