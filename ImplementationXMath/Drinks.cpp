#include <iostream>
using namespace std;




int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int total = 0;

    for(int i = 0; i < n; i++) total += arr[i];

    double ans = total / (n*1.0);

    cout << ans;

    return 0;
}