#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = arr[i].length()-1; j >= 0; j--) {
            if(arr[i][j] == 'w'){
                cout << 'w';
            } else if(arr[i][j] == 'p'){
                cout << 'q';
            } else{
                cout << 'p';
            }
        }
        cout << endl;
    }




    return 0;
}