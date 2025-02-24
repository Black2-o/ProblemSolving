#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    int arr[n*m];
    for(int i = 0; i < n*m; i++) cin >> arr[i];

    int x;
    cin >> x;

    for(int i = 0; i < n*m; i++){
        if(arr[i] == x){
            cout << "will not take number";
            return 0;
        }
    }
    
    cout << "will take number";
    return 0;
}