#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n*2];
    int runner = 0;
    int highest = 0;

    for (int i = 0; i < n*2; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n*2; i++) {
        if (i%2 == 0){
            runner -= arr[i];
        }else{
            runner += arr[i];
            if(runner > highest){
                highest = runner;
            }
        }
    }

    cout << highest;

    return 0;
}