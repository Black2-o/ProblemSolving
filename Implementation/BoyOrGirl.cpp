#include <bits/stdc++.h>
using namespace std;




int main(){
    string str;
    cin >> str;
    


    unordered_set<char> x;
    for (int i = 0; i < str.size(); i++) {
 
        x.insert(str[i]);
    }
    int size = x.size();

    if (size%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    

    return 0;
} 