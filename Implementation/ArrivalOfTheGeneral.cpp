#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int findMaxNumberIndex(const vector<int>& data, int target) {
    for (int i = 0; i < data.size(); ++i) {
        if (data[i] == target) {
            // Return the current index as soon as the target is found
            return i;
        }
    }
    return -1;
}

int findMinNumberIndex(const vector<int>& data, int target) {
    for (int i = data.size(); i >= 0 ; i--) {
        if (data[i] == target) {
            // Return the current index as soon as the target is found
            return i;
        }
    }
    return -1;
}

int main(){
    int n; cin >> n;
    int ans = 0;


    // Import All The Numbers Into a Vector
    vector<int> v;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    
    // Finding The Minimum and Maximum Number 
    auto min_val_iter = min_element(v.begin(), v.end());
    auto max_val_iter = max_element(v.begin(), v.end());
    int min_val = *min_val_iter;
    int max_val = *max_val_iter;
    

    // Check How Much Distance Max Number Should Pass 
    int max_index = findMaxNumberIndex(v, max_val);
    ans += max_index;
    
    // Check How Much Distance Min Number Should Pass 
    int min_index = findMinNumberIndex(v, min_val);
    ans += n - min_index - 1;

    // If Max Number And Min Number Cross Each Other Then One Step Less They should pass
    if(max_index > min_index) ans--;

    cout << ans;

    return 0;
} 