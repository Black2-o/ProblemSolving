#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int majorityElement(const vector<int>& A) {
        int n = A.size();
        int ans = 0;

        // Iterate over 32 bits for integer representation
        for (int b = 0; b < 32; b++) {
            int ones = 0;

            // Count the number of 1 bits at position `b`
            for (int num : A) {
                if (num & (1 << b)) {
                    ones++;
                }
            }

            // If more than half of the numbers have 1 at bit `b`, set bit `b` in `ans`
            if (ones > n / 2) {
                ans |= (1 << b);
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> A = {3, 2, 1, 4, 2, 2};
    cout << "Majority Element: " << solution.majorityElement(A) << endl;
    return 0;
}
