#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int total = 2 * n;
        vector<long long> a(total);
        for (int i = 0; i < total; i++){
            cin >> a[i];
        }
        
        // Sort the array
        sort(a.begin(), a.end());
        
        // for(int i = 0; i < total ; i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        // cout << "A[n] is " << a[n] << " A[n-1] is " << a[n-1] << endl; 
        // The answer is the difference between the element at index n and index n-1.
        // (Remember: 0-indexed, so these correspond to b_n and b_{n+1} in 1-indexed notation)
        long long ans = a[n] - a[n-1];
        cout << ans << "\n";
    }
    return 0;
}
