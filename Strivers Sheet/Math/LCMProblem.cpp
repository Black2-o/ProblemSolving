#include <iostream>
#include <cmath> 
using namespace std;


int main(){
    int t; cin >> t;

    for(int i = 0; i < t; i++){
        int l, r; cin >> l >> r;


        int max = (l > r) ? l : r;

        do
        {
            if (max % l == 0 && max % r == 0)
            {
                cout << "LCM = " << max << endl;
                break;
            }
            else
                ++max;
        } while (true);

        // cout << r / l  << endl;

    }
    
    return 0;
} 