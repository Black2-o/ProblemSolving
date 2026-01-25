#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int n; string str;
    cin >> n; cin >> str;

    if(n < 26){
        cout << "NO";
        return 0;
    }

    transform(str.begin(), str.end(), str.begin(),
        [](unsigned char c){ return std::tolower(c); });

    set<int> s;
    for(int i = 0; i < n;i++){
        s.insert(str[i]);
    }

    if(s.size() == 26){
        cout << "YES";
    }else{
        cout << "NO";
    }



    return 0;
}