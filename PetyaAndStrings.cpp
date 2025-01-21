#include <bits/stdc++.h>
using namespace std;




int main(){
    string first;
    string second;
    cin >> first >> second;

    for (auto& x : first) { 
        x = tolower(x); 
    } 
    for (auto& x : second) { 
        x = tolower(x); 
    } 

    if(first == second){
        cout << 0;
    } else if(first > second) {
        cout << 1;
    } else{
        cout << -1;
    }


    return 0;

} 