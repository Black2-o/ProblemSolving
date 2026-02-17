#include <iostream>
#include <cmath> 
using namespace std;





int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if((b+c) > d){
            cout << b << " " << c << " " << d << endl;
        }else{
            cout << b << " " << c << " " << c << endl;
        }
    }
    
    return 0;
} 