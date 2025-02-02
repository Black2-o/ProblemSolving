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

    // for (int i = 0; i < n; i++) {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    for (int i = 0; i < n-1; i++) {
        // cout << "VI Second is " << v[i].second << " & V2 First is" << v[i+1].first << endl;
        if(v[i].second <= v[i+1].first){
            count++;
            // cout << "Count is " << count << endl;
        }
    }
    
    cout << count;


    return 0;
}