#include <iostream>
using namespace std;

int main() {
    int l, r, a;
    cin >> l >> r >> a;  // Read input values
    
    // Step 1: Balance left and right as much as possible
    int min_lr = min(l, r);
    int max_lr = max(l, r);
    int diff = max_lr - min_lr;
    cout << "Min Lr " << min_lr << " Max Lr " << max_lr << " Diff is " << diff << endl;
    // Step 2: Use ambidexters to balance the team
    if (a >= diff) {
        a -= diff;  // Use ambidexters to make left and right equal
        min_lr = max_lr;
    } else {
        min_lr += a;  // Use ambidexters partially
        a = 0;
    }

    // Step 3: Distribute remaining ambidexters equally
    int max_team_size = 2 * (min_lr + a / 2);

    cout << max_team_size << endl;  // Print the final answer
    return 0;
}
