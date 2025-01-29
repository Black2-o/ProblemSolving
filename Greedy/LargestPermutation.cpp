#include <iostream>
#include <algorithm>
using namespace std;

bool comp (int a, int b) {
  return a > b;
}


int main() {

    int n;
    int swap;
    cin >> n >> swap;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_arr[n];
    copy(arr, arr+n, max_arr);
    sort(max_arr, max_arr+n, comp);

    // for (int i = 0; i < n; i++) {
    //     cout << max_arr[i];
    // }

    for (int i = 0; i < swap; i++) {
        if(max_arr[i] != arr[i]){
            auto ptr = find(arr, arr + n, max_arr[i]);
            int idx = ptr - arr;
            arr[idx] = arr[i];
            arr[i] = max_arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}