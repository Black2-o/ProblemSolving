#include <bits/stdc++.h>
using namespace std;




int main(){

#ifndef a
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    int t; cin >> t;
    for(int i = 0;i < t; i++){
        bool condition = true;
        string s; cin >> s;
        if(s.size()%2 == 0){
            int mid = s.size()/2;
            // cout << mid << endl;
            for(int j = 0; j < mid; j++){
                if(s[j] != s[j+mid]){
                    condition = false;
                    break;
                }
            }
        }else{
            condition = false;
        }

    if(condition == false){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    }




    return 0;
}
