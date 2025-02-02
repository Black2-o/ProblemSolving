// #include <iostream>


// int main() {
//     int n;
//     char colors[n];
//     int x = 0;

//     std::cin >> n;

//     for (int i = 0; i < n; i++) {
//         std::cin >> colors[i];
//     }

//     for (int i = 0; i < n; i++) {
//         if(colors[i] == colors[i+1]){
//             x++;
//         }
//     }
//     std::cout << x;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of stones
    string s;
    cin >> s; // Input the string representing the stones' colors

    int remove_count = 0;

    // Iterate through the stones
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            remove_count++; // Increment count if two neighboring stones have the same color
        }
    }

    // Output the result
    cout << remove_count << endl;

    return 0;
}
