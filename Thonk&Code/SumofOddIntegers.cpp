#include <iostream>
using namespace std;

void solve(){
    long long n, k;
    cin >> n >> k;

    if (k * k <= n && (n % 2 == k % 2)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}



int main() {
    int tc;
    cin >> tc;

    for(int t = 0; t < tc; t++){
        solve();
    }

    return 0;
}