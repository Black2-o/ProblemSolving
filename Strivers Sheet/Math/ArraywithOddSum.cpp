#include <iostream>
#include <cmath> 
using namespace std;


int main(){
    int t; cin >> t;
    
    for(int ti = 0; ti <  t; ti++){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        bool ans = false;
        if(n % 2 == 0){
            for(int i = 0; i < n-1; i++){
                if(arr[i] % 2 != 0 and arr[i+1] % 2 == 0){
                    ans = true;
                    break;
                }else if(arr[i] % 2 == 0 and arr[i+1] % 2 != 0){
                    ans = true;
                    break;
                }
            }

        }else{
            for(int i = 0; i < n; i++){
                if(arr[i] % 2 != 0){
                    ans = true;
                    break;
                } 
            }
        }

        if(ans == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0;
} 