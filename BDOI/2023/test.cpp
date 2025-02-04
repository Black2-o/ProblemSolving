#include <iostream>
#include <algorithm>
using namespace std;

long long solve(){
    int n;
    long long m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];


    if(n <= 1){
        return m;
    }

    long long total_w = 0;
    for(int i = 0; i < n; i++) total_w += arr[i];

    long long g = arr[0];

    long long x = total_w / g;

    if(m < x) return 0;

    long long minimum_forEach = m / x;

    long long ans = minimum_forEach * x;

    return ans;
}


int main() {

    cout << solve();

    return 0;
}