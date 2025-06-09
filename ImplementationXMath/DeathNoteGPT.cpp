#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long m;
    cin >> n >> m;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    long long carry = 0;
    for (int i = 0; i < n; ++i) {
        long long total = carry + a[i];
        cout << (total / m) << " ";
        carry = total % m;
    }

    cout << endl;
    return 0;
}
