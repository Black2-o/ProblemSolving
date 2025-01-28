#include <iostream>
#include <queue>
using namespace std;

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
    bool condition = true;
    for (int i = 0; i < n; i++) {

        if(arr[i] == '1'){
            // cout << "I is " << i << endl;
            if(hat.empty() || hat.front() != i+1){
                cout << "No" << endl;
                condition = false;
                break;
            }
            hat.pop();
        } else{
            if (!hat.empty() && hat.front() == i + 1) {
                hat.pop(); // We can pop the hat if it matches unnecessarily
            }

        }


    }
    if(condition){
        cout << "YES" << endl;
    }
}

    return 0;
}