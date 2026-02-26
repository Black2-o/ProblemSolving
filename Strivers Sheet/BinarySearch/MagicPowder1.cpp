#include <iostream>
using namespace std;
 
 
int main(){
    int n, k; cin >> n >> k;
    int arra[n];
    for(int i = 0; i < n; i++) cin >> arra[i];
    int arrb[n];
    for(int i = 0; i < n; i++) cin >> arrb[i];
 
    int ans = 0;
 
    while(k > 0){
        for(int i = 0; i < n; i++){
            if(arrb[i] - arra[i] >= 0){
                arrb[i] -= arra[i];
            }else{
                if(k >= abs(arrb[i] - arra[i])){
                    k -= abs(arrb[i] - arra[i]);
                    arrb[i] = 0;
                }else{
                    cout << ans;
                    return 0;
                }
            }
 
        }
        ans += 1;
    }
 
 
    cout << ans;
    return 0;
} 