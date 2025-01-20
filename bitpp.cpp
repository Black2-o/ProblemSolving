#include <iostream>
using namespace std;


int main() {
    int x = 0;
    int n;
    cin >> n;

    string method[n];

    for (int i = 0; i < n; i++) {
        cin >> method[i];
    }

    for (int i = 0; i < n; i++) {
        if (method[i] == "X++" || method[i] == "++X"){
            x++;
        }
        else if (method[i] == "X--" || method[i] == "--X"){
            x--;
        }
    }

    cout << x << endl;

    return 0;
}