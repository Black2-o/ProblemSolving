#include <iostream>
#include<algorithm>
using namespace std;




int main(){
    string str;
    cin >> str;
    
    str.erase(remove(str.begin(), str.end(), '+'), str.end());

    sort(str.begin(), str.end());


    for (int i = 0; i < str.length() - 1; i++) {
        cout << str[i] << "+";
    }
    cout << str[str.length()-1];

    
    return 0;
} 