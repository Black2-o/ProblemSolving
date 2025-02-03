#include <iostream>
#include <map>
using namespace std;



int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    map<int, int> map;
    for(int i = 0; i < n; i++){
        if(map.find(arr[i]) != map.end()){
            map[arr[i]] = map[arr[i]] + 1;
        }else{
            map.emplace(arr[i], 1);
        }
    } 

    int ans = 0;
    for (auto &p : map) {
        if(ans < p.second){
            ans = p.first;
        }
    }


    cout << ans;
    return 0;
}