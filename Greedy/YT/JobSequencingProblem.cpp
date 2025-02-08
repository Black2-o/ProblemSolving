#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;




int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    vector<int> p(n);

    for (int i = 0; i < n; i++) cin >> d[i];
    for (int i = 0; i < n; i++) {
        cin >> p[i];  
    }
    vector<pair<int, int>> v;

    for(int i= 0; i < n; i++){
        v.push_back(make_pair(d[i], p[i]));
    }

    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++){
        if(v[i] == v[i-1] && v[i] > v[i-1]){
            
        }
    }
    return 0;
}


