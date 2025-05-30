#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;


int largest(vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }


    int max = largest(arr);


    int min_spend = 0;
    for(const auto& val : arr) {
        min_spend += (max - val);
    }

    cout << min_spend;

    return 0;
}