#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int minMovesToGroupXs(const string& A) {
    vector<int> crosses;

    // Step 1: Collect indices of all 'x' in the string
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == 'x') {
            crosses.push_back(i);
        }
    }
    // for(int i = 0; i < crosses.size(); i++) cout << crosses[i] << " ";

    if (crosses.empty()) {
        return 0;
    }

    int n = crosses.size();
    int median_index = crosses[n / 2]; // Choose the median for optimal grouping
    int total_moves = 0;

    // Calculate moves required to align all 'x' at the median position
    for (int i = 0; i < n; i++) {
        int target_position = median_index - (n / 2) + i;
        total_moves = (total_moves + abs(crosses[i] - target_position)) % MOD;
    }

    return total_moves;
}

int main() {
    string A;
    cin >> A;

    int result = minMovesToGroupXs(A);
    cout << result << endl;

    return 0;
}
