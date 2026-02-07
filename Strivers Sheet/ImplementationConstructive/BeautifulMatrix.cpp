#include <iostream>
#include <string>
using namespace std;


int main() {
    int arr1[5], arr2[5], arr3[5], arr4[5], arr5[5]; 
    int* arr[5] = {arr1, arr2, arr3, arr4, arr5};

    for(int i = 0; i <= 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            // cout << arr[i][j];
            if(arr[i][j] == 1){
                // cout << abs(i - 2) << endl;
                // cout << abs(j - 2) << endl;
                cout << abs(i - 2) + abs(j - 2);
                return 0;
            }
        }
    }

}