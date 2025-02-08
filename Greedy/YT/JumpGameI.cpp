#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int maxJump = 0;
    for(int i = 0; i < n; i++){
        if(maxJump < i){
            cout << "False";
            return 0;
        }
        if(maxJump < (arr[i]+i)){
            maxJump = i + arr[i];
            if(maxJump > n){
                cout << "True";
                return 0;
            }
        }
        // cout << i << " " << maxJump << endl;
    }



    cout << maxJump;
    return 0;
}
