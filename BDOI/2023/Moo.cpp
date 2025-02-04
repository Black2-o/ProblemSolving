#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b) {
    while(b) {
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}


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
    for (int i = 1; i < n; i++){
        g = gcd(g, arr[i]);
    }

    long long total = total_w / g;

    if(m < total) return 0;

    long long minimum_forEach = m / total;

    long long ans = minimum_forEach * total;

    return ans;
}


int main() {

    cout << solve();

    return 0;
}