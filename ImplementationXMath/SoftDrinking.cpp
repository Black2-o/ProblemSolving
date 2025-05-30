#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int f = (k*l) / nl;

    int s = c*d;

    int t = p/np;

    int result = min({f, s, t}) / n;

    cout << result;

    return 0;
}