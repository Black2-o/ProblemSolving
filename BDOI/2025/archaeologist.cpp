#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        vector<pair<int, int>> v;
        int x = 1;
        for(int j = 0; j < n-1; j++){

            for(int i = x; i < n; i++){
                // cout << j << " " << i << endl;
                v.push_back(make_pair(arr[j], arr[i]));
            }
            x++;
        }

        int maxv = 0;
        sort(arr, arr+n);
        for (const auto& a : v) {
            int minV = min(a.first, a.second);
            int minVT;
            for(int i = 0; i < n; i++){
                if(arr[i] == minV){
                    minVT = arr[i+1];
                }
            }
            maxv = max(maxv, (a.second - a.first + 1)*(minV + minVT));
        }
        
        cout << maxv << endl;

    }
    return 0;
}