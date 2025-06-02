#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int a1, b1, a2, b2;

        int arr1[2];
        int arr2[2];
        for(int i = 0; i < 2;i++) cin >> arr1[i];
        for(int i = 0; i < 2;i++) cin >> arr2[i];


        sort(arr1, arr1 + 2);
        sort(arr2, arr2 + 2);

        if(arr1[1] == arr2[1]){
            if((arr1[0] + arr2[0]) == arr1[1]){
                cout << "Yes";
            }else{
                cout << "No";
            }
        }else{
            if((arr1[1] + arr2[1]) == arr1[0]){
                cout << "Yes";
            }else{
                cout << "No";
            }
        }
        cout << endl;

    }
    return 0;
}