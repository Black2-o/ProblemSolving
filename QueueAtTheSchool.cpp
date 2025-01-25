#include <iostream>
using namespace std;


int main() {
    int n;
    int s;
    cin >> n >> s;
    char arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for (int i = 0; i < s; i++){
        for (int j = 0; j < n; j++) {
            if(arr[j] == 'B'){
                if(arr[j+1] == 'G'){
                    arr[j+1] = 'B';
                    arr[j] = 'G';
                    j++;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}