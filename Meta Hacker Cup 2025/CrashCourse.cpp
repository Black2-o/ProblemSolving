#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int case_num) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int alice_eaten = 0;
    int bob_eaten = 0;
    int left = 0;
    int right = n - 1;

    vector<int> a_indices, b_indices;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'A') a_indices.push_back(i);
        else b_indices.push_back(i);
    }

    int a_ptr = 0;
    int b_ptr = b_indices.size() - 1;
    bool alices_turn = true;
    int turns_without_eating = 0;

    while (left <= right) {
        if (turns_without_eating >= 2) break;

        if (alices_turn) {
            while (a_ptr < a_indices.size() && a_indices[a_ptr] < left) a_ptr++;
            if (a_ptr < a_indices.size() && a_indices[a_ptr] <= right) {
                alice_eaten++;
                left = a_indices[a_ptr] + 1;
                a_ptr++;
                turns_without_eating = 0;
            } else {
                turns_without_eating++;
            }
        } else {
            while (b_ptr >= 0 && b_indices[b_ptr] > right) b_ptr--;
            if (b_ptr >= 0 && b_indices[b_ptr] >= left) {
                bob_eaten++;
                right = b_indices[b_ptr] - 1;
                b_ptr--;
                turns_without_eating = 0;
            } else {
                turns_without_eating++;
            }
        }
        alices_turn = !alices_turn;
    }

    cout << "Case #" << case_num << ": ";
    if (alice_eaten > bob_eaten) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) solve(i);
    return 0;
}
