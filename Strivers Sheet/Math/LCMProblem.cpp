#include <iostream>
#include <cmath> 
using namespace std;


int main(){
    int t; cin >> t;

    for(int i = 0; i < t; i++){
        int l, r; cin >> l >> r;

        int x = l;
        int y = 2 * l;

        if(y <= r){
            cout << x << " " << y << endl;
        }else{
            cout << "-1 -1" << endl;
        }

    }
    
    return 0;
} 