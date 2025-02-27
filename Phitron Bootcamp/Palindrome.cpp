#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
     
    int h = s.length();
    for(int i = 0; i < s.length()/2; i++){
        if(s[i] == s[h-1]){
            h--;
        } else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}