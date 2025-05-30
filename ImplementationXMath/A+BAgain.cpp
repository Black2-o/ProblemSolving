#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0;i < n; i++) cin >> arr[i];


    for(int i = 0;i < n; i++){
        int firstNumber = (arr[i] % 10);
        int secondNumber = (arr[i] - firstNumber) / 10;
        cout << secondNumber + firstNumber << endl;
    }


    return 0;
}