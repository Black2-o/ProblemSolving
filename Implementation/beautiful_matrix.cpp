#include <iostream>
#include <cmath> 
using namespace std;





int main(){
    int arr1[5], arr2[5], arr3[5], arr4[5], arr5[5]; 
    int* arrays[5] = {arr1, arr2, arr3, arr4, arr5};
    int result = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> arrays[i][j];
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if (arrays[i][j] == 1) {
                // cout << arrays[i][j] << " Found At I " << i << " And Found At J " << j <<  endl;
                // cout << "In X Axis We Need More " << abs(2-i) << endl;
                result += abs(2-i);
                // cout << "In Y Axis We Need More " << abs(2-j) << endl;
                result += abs(2-j);
            }   
        }
    }

    cout << result;

    return 0;

} 