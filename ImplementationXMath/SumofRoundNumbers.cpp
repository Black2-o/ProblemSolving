#include <iostream>
#include <cmath>
using namespace std;



int main() {
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++) cin >> arr[i];

    int arrx[n];
    for(int i = 0; i < n; i++) arrx[i] = arr[i];


    for(int i = 0; i < n; i++){
        int result = 0;
        int k[4];
        if(arr[i] % 10 > 0){
            result += 1;
            k[0] = arr[i] % 10;
            arr[i] -= arr[i] % 10;
        }else{k[0] = 0;}

        if(arr[i] % 100 > 0){
            result += 1;
            k[1] = arr[i] % 100;
            arr[i] -= arr[i] % 100;
        }else{k[1] = 0;}

        if(arr[i] % 1000 > 0){
            result += 1;
            k[2] = arr[i] % 1000;
            arr[i] -= arr[i] % 1000;
        }else{k[2] = 0;}

        if(arr[i] % 10000 > 0){
            result += 1;
            k[3] = arr[i] % 10000;
            arr[i] -= arr[i] % 10000;
        }else{k[3] = 0;}


        if(result > 1){
            cout << result<< endl;
            for(int j = 0; j < 4; j++){
                if(k[j] != 0){
                    cout << k[j] << " ";
                }
            }
            cout << endl;
        }else{
            cout << 1 << endl;
            cout << arrx[i] << endl;
        }
    }


    return 0;
}