#include <iostream>
using namespace std;

bool findTrue(int a, int b, int c) {
    if(a >= b && a >= c)
        if(b+c == a){
            return true;
        }else{
            return false;
        }
    else if(b >= a && b >= c)
        if(a+c == b){
            return true;
        }else{
            return false;
        }
    else 
        if(b+a == c){
            return true;
        }else{
            return false;
        }
  
    return false;
}


int main() {
    int n; cin >> n;
    
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;

        if(findTrue(a,b,c)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}