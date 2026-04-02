#include <iostream>
#include <algorithm>
using namespace std;


void print(__int128 x){
    if(x == 0){
        cout << 0 << endl;
        return;
    }

    string s="";
    while(x){
        s += '0' + x%10;
        x/=10;
    }

    reverse(s.begin(), s.end());
    cout << s << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while(t--){
        long long a,b;
        cin >> a >> b;

        __int128 res = (__int128)a * b;
        print(res);
    }
}