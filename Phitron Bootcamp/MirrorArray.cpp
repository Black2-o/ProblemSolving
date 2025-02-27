#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int arr[m];
        for(int j = 0; j < m; j++) cin >> arr[j];
        for(int j = m-1; j >= 0; j--) cout << arr[j] << " ";
        cout << endl;
    }
}