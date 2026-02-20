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

    while(nb >= b and ns >= s and nc >= c){
        cout << "NB " << nb << " NS " << ns << " NC " << nc << endl;
        nb-=b; ns-=s; nc-=c;
        ans+=1;
    }

    int nb_need = 0;
    int ns_need = 0;
    int nc_need = 0;

    if(b > 0 and nb > 0){nb_need = b - nb;}
    if(s > 0 and ns > 0){ns_need = s - ns;}
    if(c > 0 and nc > 0){nc_need = c - nc;}

    cout << "NB " << nb << " NS " << ns << " NC " << nc << endl;
    
    cout << "NB Need " << nb_need << " NS Need " << ns_need << " NC Need " << nc_need<< endl;


    int need_price = (nb_need * pb) + (ns_need * ps) + (nc_need * pc);
    cout << need_price << endl;
    if(r > need_price and need_price > 0){
        r-= need_price;
        ans+=1;
    }

        
        // cout << ans << endl;
    int one_f_price = ( b * pb ) + ( s * ps ) + ( c * pc );
        // cout << "one FUll Price " << one_f_price << " r " << r << endl;
        // cout << ".. " <<  (r / one_f_price) << endl;
    ans += (r / one_f_price);


    cout << ans;

    return 0;
} 