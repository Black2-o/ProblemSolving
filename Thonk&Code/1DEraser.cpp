#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n, k;
        cin >> n >> k;
        char arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int total = 0;
        vector<int> v;
        for(int i = 0; i < n; i++){
            if(arr[i] == 'B'){
                v.push_back(i);
            }
        }
        
        int max = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] >= max){
                max = v[i] + k;
                total++;
            }
            // cout << max << " " ;
        }
        // cout << endl;
        cout << total << endl;

    }

    return 0;
}   