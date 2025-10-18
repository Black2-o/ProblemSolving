#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve(int case_num) {
    int N, A, B;
    cin >> N >> A >> B;

    int coolness_N = 0;
    for (int i = A; i >= 1; --i) {
        if (B % i == 0) {
            coolness_N = i;
            break;
        }
    }

    vector<long long> multipliers;

    for (int i = 0; i < N - 1; ++i) {
        multipliers.push_back(1);
    }
    multipliers.push_back(coolness_N);

    for (int i = 0; i < N - 1; ++i) {
        multipliers.push_back(1);
    }
    multipliers.push_back(B / coolness_N);

    cout << "Case #" << case_num << ":";
    for (long long m : multipliers) {
        cout << " " << m;
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        solve(i);
    }
    return 0;
}