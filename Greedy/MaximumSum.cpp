#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void solve(){
    int n;
    int k;
    cin >> n >> k;


    vector<long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());


    v[0] = 0; v[1] = 0;
    if(k == 2){
        v[n-1] = 0;
    }

    long long sum = 0;
    for_each(v.begin(), v.end(), [&sum](int i) { 
        cout << i << " ";
        sum += i; 
    });
    cout << endl;
    
    cout << sum << endl;
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}
