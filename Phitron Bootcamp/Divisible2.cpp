#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i < (n/21)+1; i++) {
        cout << i*21 << endl;
    }
    return 0;
}
