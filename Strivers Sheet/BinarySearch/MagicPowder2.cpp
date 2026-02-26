#include <iostream>
using namespace std;

int main(){
    long long n, k; 
    cin >> n >> k;

    long long arra[n];
    for(int i = 0; i < n; i++) cin >> arra[i];

    long long arrb[n];
    for(int i = 0; i < n; i++) cin >> arrb[i];

    long long ans = 0;
    long long left = 0, right = 2e9;

    while(left <= right){
        long long mid = (left + right) / 2;

        long long required = 0;

        for(int i = 0; i < n; i++){
            long long need = arra[i] * mid;
            if(need > arrb[i]){
                required += need - arrb[i];
                if(required > k) break;
            }
        }

        if(required <= k){
            ans = mid;
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    cout << ans;
}