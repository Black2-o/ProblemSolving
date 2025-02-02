#include <bits/stdc++.h>
using namespace std;



int main(){
    int k;
    int n;
    int w;
    int total_need = 0;
    cin >> k >> n >> w; 

    for (int i = 1; i < w+1; i++) {
        total_need += i*k;
    }
    
    if(total_need > n){
        cout << total_need - n;
    }else{
        cout << 0;
    }


    return 0;

} 