#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n*2];
    int available = 0;


    for (int i = 0; i < n*2; i++) {

        cin >> arr[i];

    }

    for (int i = 0; i < n*2; i+=2) {
        if(arr[i] <= arr[i+1] - 2){
            available++;
        }
    }
    
    cout << available;

    return 0;
}