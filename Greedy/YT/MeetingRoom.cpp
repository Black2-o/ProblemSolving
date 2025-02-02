#include <iostream>
#include <utility> 
#include <vector>
#include <algorithm>
using namespace std;

auto comp = [](pair<int, int> a, pair<int,int> b) {
        return a.first < b.first;
};

int main() {
    int n;
    cin >> n;
    int count = 0;
    int max = 0;
    vector<pair<int, int>> v;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    vector<pair<int, int>> x;
    for (int i = 0; i < n; i++) {
        x.push_back(make_pair(v[i].first,1));
        x.push_back(make_pair(v[i].second,-1));
    }

    sort(x.begin(), x.end(), comp);

    for (int i = 0; i < n*2; i++) {
        count += x[i].second;
        if(count>max){
            max = count;
        }
    }

    cout << max;

    return 0;
}