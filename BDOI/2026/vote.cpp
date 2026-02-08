#include <iostream>
using namespace std;


int main() {
    long long x, y; cin >> x >> y;

    cout << max(llabs(x), llabs(y));

    return 0;
}