// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     set<int> distinctK;

//     for (int k = 1; k * k <= x; k++) {
//         if (x % k == 0) {
//             distinctK.insert(k);         
//             distinctK.insert(x / k);    
//         }
//     }
//     cout << distinctK.size() << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;

    int count = 0;
    for (long long k = 1; k * k <= x; ++k) {
        if (x % k == 0) {
            count++; 
            if (k != x / k) count++; 
        }
    }

    cout << count;

    return 0;
}
