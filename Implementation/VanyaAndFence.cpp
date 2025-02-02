#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int highest;
    int width = 0;

    cin >> n >> highest;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < highest){
            width++;
        } else{
            // cout << arr[i] / highest << " this is arr no " << i+1 << endl;
            width += arr[i] / highest + ((arr[i] % highest) > 0 ? 1 : 0);
        }
    }

    cout << width;

    return 0;
}