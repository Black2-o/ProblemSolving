#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int find;
    cin >> find;

    for(int i = 0;i < n; i++){
        if(arr[i] == find){
            cout << i; 
            return 0;
        }
    }
    
    cout << -1;

    return 0;
}