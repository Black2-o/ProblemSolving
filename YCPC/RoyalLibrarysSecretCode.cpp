#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long long calculateTotalPermutations(map<char, int>& freqMap, int n) {
    long long total = factorial(n);
    long long denom = 1;
    for (auto& pair : freqMap) {
        denom *= factorial(pair.second);
    }
    return total / denom;
}

string getKthPermutation(map<char, int> freqMap, int n, long long k) {
    string result;
    while (n > 0) {
        long long total = 0;
        bool found = false;
        for (auto it = freqMap.begin(); it != freqMap.end(); ) {
            char c = it->first;
            int count = it->second;
            if (count == 0) {
                it = freqMap.erase(it);
                continue;
            }
            freqMap[c]--;
            long long permutations = calculateTotalPermutations(freqMap, n - 1);
            if (k <= permutations) {
                result += c;
                n--;
                found = true;
                break;
            } else {
                k -= permutations;
                freqMap[c]++;
                ++it;
            }
        }
        if (!found) {
            return "-1";
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, int> freqMap;
    for (char c : s) {
        freqMap[c]++;
    }

    long long totalPermutations = calculateTotalPermutations(freqMap, n);

    if (k > totalPermutations) {
        cout << "-1\n";
        return 0;
    }

    string result = getKthPermutation(freqMap, n, k);
    cout << result << "\n";

    return 0;
}