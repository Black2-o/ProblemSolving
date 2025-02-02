#include <iostream>
#include <unordered_map>
using namespace std;

bool can(int n, int k, const string& s) {

    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int oddCount = 0;
    for (const auto& entry : freq) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
    }

    int requiredInsertions = max(0, oddCount - 1);

    return requiredInsertions <= k;
}

int main() {
    int n, k;
    string s;

    cin >> n >> k;
    cin >> s;

    if (can(n, k, s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
