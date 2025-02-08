#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    // for(int i = 1; i <= n/2; i++){
    //     if(n%i == 0){
    //         cout << i << " ";
    //     }
    // }
    // cout << n << " ";
    vector<int> v;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            v.push_back(i);

            if(n/i != i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());

    for(int it : v) cout << it << " ";

    return 0;
}