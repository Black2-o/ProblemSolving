#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int mice[n];
    int holes[n];
    for(int i = 0; i < n; i++) cin >> mice[i]; 
    for(int i = 0; i < n; i++) cin >> holes[i]; 

    sort(mice, mice+n);
    sort(holes, holes+n);

    int max = 0;
    int now = 0;
    for(int i = 0; i < n; i++){
        if(now>max){
            max = now;
        }
        now = 0;
        now += abs(mice[i] - holes[i]);
    }

    cout << max;

    return 0;
}