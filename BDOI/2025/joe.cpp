#include <iostream>
using namespace std;

int main() {
    long long tc;
    cin >> tc;
    for(long long t = 0; t < tc; t++){
        long long l, x;
        cin >> l >> x;
        long long y = x / l;
        // cout << x- (l*y) << endl;

        if((x-(l*y))%2==0){
            cout << (x-(l*y)) << " " << y << endl;
        }else{
            if((x-(l*(y-1)))%2==0){
                cout << (x-(l*(y-1))) << " " << y-1 << endl;
            }else{
                cout << -1  << " " << -1 << endl;
            }
        }

    }
    return 0;
}