#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int g[n];
    int c[n];
    
    for(int i = 0; i < n; i++) cin >> g[i];
    for(int i = 0; i < n; i++) cin >> c[i];

    sort(g, g+n);
    sort(c, c+n);

    int i = 0, j = 0;

    while(i < n && j < n){
        if(g[i] >= c[j]){
            // Given Cookies
            i++;
            j++;
        } else{
            // Skip That CookieSet
            j++;
        }
    }

    cout << i;

    return 0;
}





// For Leetcode

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         sort(g.begin(), g.end());
//         sort(s.begin(), s.end());

//         int i = 0, j = 0;

//         while (i < g.size() && j < s.size()) {
//             if (s[j] >= g[i]) { 
//                 i++;
//                 j++;
//             } else {
//                 j++; 
//             }
//         }
        
//         return i;
//     }
// };


