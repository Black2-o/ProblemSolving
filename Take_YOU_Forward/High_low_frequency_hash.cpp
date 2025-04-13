#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;



void FrequencyOne(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++) cin >> arr[i];


    unordered_map<int, int> map;

    for(int i = 0; i < n; i++) map[arr[i]]++;

    int highestN = 0;
    int highest;
    int lowestN = map[arr[0]];
    int lowest;

    for(auto it: map){
        if(it.second > highestN){
            highest = it.first;
            highestN = it.second;
        }
        
        if(it.second < lowestN){
            lowest = it.first;
            lowestN = it.second;
        }
    }

    cout << highest << " " << lowest;
}


int main() {
    FrequencyOne();

    return 0;
}
