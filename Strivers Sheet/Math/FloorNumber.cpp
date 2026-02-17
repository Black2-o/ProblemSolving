#include <iostream>
#include <cmath> 
using namespace std;





int main(){
    int t; cin >> t;
    for(int ti = 0; ti < t; ti++){
        int n, x;
        cin >> n >> x;

        if(n <= 2){
            cout << 1 << endl;
        }else{
            n -= 2; 
            int temp = (n / x) * x;
            if(temp < n){
                cout << (n / x) + 2 << endl;
            }else{
                cout << (n / x) + 1 << endl;
            }
        }

    }
    
    return 0;
} 