#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    sort(arr, arr+n, greater< int >() );

    for (int i = 0; i < n; i++) {
        if(arr[0] != arr[i]){
            cout << i+1;
            break;
        }
    }

    return 0;
}