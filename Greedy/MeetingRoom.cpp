#include <iostream>
#include <utility> 
#include <vector>
#include <algorithm>
using namespace std;

auto comp = [](pair<int, int> a, pair<int,int> b) {
        return a.second < b.second;
};

int main() {
    int n;
    cin >> n;
    int count = 1;
    vector<pair<int, int>> v;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i <= n-1; i++) {
        if(v[i].second > v[i+1].first){
            count++;
        }
    }

    cout << count;


    return 0;
}