#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    
    map<int, int> mp;
    // mp.insert(5, 0); mp.insert(10, 0); mp.insert(20, 0);
    for(int i = 0; i < n; i++){
        if(arr[i] == 5){
            mp[5]+=1;
        } else if(arr[i] == 10){
            if(mp[5] > 0){
                mp[5] -= 1;
                mp[10] += 1;
            } else{
                cout << "False";
                return 0;
            }
        } else{
            if(mp[10] > 0 && mp[5] > 0){
                mp[10] -= 1; mp[5] -= 1;
                mp[20] += 1;
            } else if(mp[5] > 2){
                mp[5] -= 3;
                mp[20] += 1;
            } else{
                cout << "False";
                return 0;
            }
        }
    }

    cout << "True";

    return 0;
}
