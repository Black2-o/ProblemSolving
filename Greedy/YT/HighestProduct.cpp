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

    sort(arr, arr+n);

    int lowThighO = arr[0] * arr[1] * arr[n-1];
    int high = arr[n-1] * arr[n-2] * arr[n-3];

    cout << max(lowThighO, high);

    return 0;
}