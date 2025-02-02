#include <iostream>
using namespace std;


void solve(){
    int n;
    cin >> n;

    int cap[n+1];
    for(int i=1; i<= n ;i++) cin >> cap[i];
    char serial[n+1];
    for(int i=1; i <= n; i++) cin >> serial[i];

    int i = 1, j = 1;
    while(j <= n){
        if(serial[j] == '1'){
            // Must Give Cap
            if(j == cap[i]){
                // Happy
                j++;
                i++;
            }else{
                // Unhappy
                cout << "NO" << endl;
                return;
            }
        } else{
            // Must Not
            if(j==cap[i]){
                // cout << "Here J is " << j << " And I is "<< i << " And Cap[i] is " << cap[i] << endl;
                // Not Give Him
                j++;
            }else{
                // Otherwise 
                if(serial[cap[i]] == '1'){
                    // cout << "Here J is " << j << " Here I is " << i << " And Cap[i] is " << cap[i] << " And serial[cap[i]] is " << serial[cap[i]] << endl;
                    // Not Given 
                    j++;
                }else{
                    // Given
                    j++;
                    i++;
                }
            }
        }
    }
    cout << "YES" << endl;
    return;
}



int main(){
    int t;
    cin>>t;
    for(int tc=0; tc < t; tc++){
        // cout<<"Case "<<tc<<": " << endl;
        solve();
    }
    return 0;
}