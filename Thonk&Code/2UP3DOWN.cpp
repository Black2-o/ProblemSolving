#include <iostream>
using namespace std;

int main() {
    int first, second;
    cin >> first >> second;

    if ((second - first <= 2 && second - first > 0) || (first - second <= 3 && first - second > 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
