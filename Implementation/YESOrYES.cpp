#include <iostream>
#include <string>
#include <algorithm>
using namespace std;




int main(){
    int n; cin >> n;

    string arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++){
        string word = arr[i];
        transform(word.begin(), word.end(), word.begin(),
        [](unsigned char c){ return std::tolower(c); });
        
        if(word == "yes"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }


    
    return 0;
} 