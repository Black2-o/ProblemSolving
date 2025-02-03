#include <iostream>
using namespace std;

int solve(){
    int n;
    cin >> n;
    int gas[n*2];
    for(int i = 0; i < n; i++) cin >> gas[i];
    int cost[n*2];
    for(int i = 0; i < n; i++) cin >> cost[i];

    for(int i = n; i < n*2; i++){
        gas[i] = gas[i-n];
        cost[i] = cost[i-n];
    }

    int start = 0;
    int x = 0;
    for(int i = 0; i < n*2; i++){
        x+= gas[i];
        x-= cost[i];
        // cout << "I is " << i << " X is " << x << " Start is " << start << endl;
        if(x<0){
            x = 0;
            start = i;
        }
        if(i == start+n){
            return start + 1;
        }
    }

    return -1;
}


int main() {


    cout << solve();

    return 0;
}