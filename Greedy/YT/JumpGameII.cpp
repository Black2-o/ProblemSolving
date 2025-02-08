#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int maxJump = 0;
    int minJump_Need = 0;
    for(int i = 0; i < n; i++){
        if(maxJump < i){
            cout << "Not Possible";
            return 0;
        }
        if(maxJump < (arr[i]+i)){

            // cout << "MinJump  " << minJump_Need << " At I " << i << " arr[i] is " << arr[i] << endl;
            maxJump = i + arr[i];
            if(maxJump > n){
                // cout << "True";
                cout << minJump_Need;
                return 0;
            }
            minJump_Need++;
        }
        // cout << i << " " << maxJump << endl;
    }

    cout << maxJump;
    return 0;
}
