#include <iostream>
#include <set>
using namespace std;


int main() {
    int n;cin >> n;
    set<int> lvl;

    int p; cin >> p;
    for(int i = 0; i < p; i++){
        int x; cin >> x;
        lvl.insert(x);
    }


    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int y; cin >> y;
        lvl.insert(y);
    }



    if(lvl.size() == n){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }

    return 0;
}