#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int wt = 0;
    int j = n-1;
    for(int i = 0; i < n-1; i++){
        wt+= j*arr[i];
        // cout << wt << endl;
        j--;
    }

    cout << wt / n;

    return 0;
}
