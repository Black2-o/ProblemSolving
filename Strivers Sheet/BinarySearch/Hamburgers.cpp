#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string recipe;
    cin >> recipe;
    int nb, ns, nc; cin >> nb >> ns >> nc;
    int pb , ps, pc; cin >> pb >> ps >> pc;
    long long r; cin >> r;

    long long ans = 0;

    int b = 0; int s = 0; int c = 0;
    
    for(int i = 0; i < recipe.length(); i++){
        if(recipe[i] == 'B'){
            b += 1;
        }else if(recipe[i] == 'S'){
            s += 1;
        }else{
            c += 1;
        }
    }


    while(nb > 0 or ns > 0 or nc > 0){
        // cout << "NB " << nb << " NS " << ns << " NC " << nc << endl;
        if(b > 0){
            if(nb >= b){
                nb -= b;
            }else{
                r -= abs(b-nb) * pb;
                nb = 0;
                if(r >= 0){

                }else{
                    cout << ans;
                    return 0;
                }
            }
        }else{nb = 0;}
        if(s > 0){
            if(ns >= s){
                ns -= s;
            }else{
                r -= abs(s-ns) * ps;
                ns = 0;
                if(r >= 0){

                }else{
                    cout << ans;
                    return 0;
                }
            }
        }else{ns = 0;}
        if(c > 0){
            if(nc >= c){
                nc -= c;
            }else{
                r -= abs(c-nc) * pc;
                nc = 0;
                if(r >= 0){

                }else{
                    cout << ans;
                    return 0;
                }
            }
        }else{nc = 0;}

        ans+=1;
    }


    int one_f_price = ( b * pb ) + ( s * ps ) + ( c * pc );
    ans += (r / one_f_price);


    cout << ans;

    return 0;
} 