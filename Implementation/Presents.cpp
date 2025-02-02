#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of friends
    vector<int> p(n), result(n);
    
    // Input the array p
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    // Determine who gave a gift to whom
    for (int i = 0; i < n; ++i) {
        result[p[i] - 1] = i + 1; // Map giver to recipient
    }
    
    // Output the result
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    
    return 0;
}
