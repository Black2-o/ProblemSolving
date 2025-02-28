#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int total = 0;
    for(int i = 0; i < n; i++){
        // cout << s[i] << endl;
        total += s[i] - '0';
    }
    cout << total;
    return 0;
}
