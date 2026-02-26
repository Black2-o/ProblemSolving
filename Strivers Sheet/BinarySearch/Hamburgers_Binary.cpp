#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string recipe;
    cin >> recipe;
    int nb, ns, nc; cin >> nb >> ns >> nc;
    int pb , ps, pc; cin >> pb >> ps >> pc;
    long long r; cin >> r;

    int b = 0; int s = 0; int c = 0;
    
    for(int i = 0; i < recipe.length(); i++){
        if(recipe[i] == 'B'){
            b += 1;
        }else if(recipe[i] == 'S'){
            s += 1;
        }else{
            c += 1;
        }
    }

    long long left = 0, right = 10e13, ans = 0;


    while(left <= right){
        long long mid = (left + right) / 2;

        long long reqB = (max(0LL, b * mid - nb));
        long long reqS = (max(0LL, s * mid - ns));
        long long reqC = (max(0LL, c * mid - nc));
        // cout << "ReqB " << reqB << " ReqS " << reqS << " ReqC " << reqC << endl;
        long long cost = reqB * pb + reqS * ps + reqC * pc;

        // cout << "Left " << left << " MID " << mid << " Right " << right << endl;
        if(cost <= r){
            ans = mid;
            left = mid + 1;
        }else{
            right = mid - 1;
        }
        
    }

    cout << ans;


    return 0;
} 