#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    bool condition = true;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if(arr[i] == 1){
            cout << "HARD";
            condition = false;
            break;
        }
    }

    if(condition){
        cout << "EASY";
    }



    return 0;
}