#include <iostream>
using namespace std;

int main() {
    int l, r, a;
    cin >> l >> r >> a;

    int min_lr = min(l, r);
    int max_lr = max(l, r);
    int diff = max_lr - min_lr;


        
    if (a >= diff) {
        a -= diff; 
        min_lr = max_lr;
    } else {
        min_lr += a;  
        a = 0;
    }


    cout << 2 * (min_lr + a / 2);

    
    return 0;
}