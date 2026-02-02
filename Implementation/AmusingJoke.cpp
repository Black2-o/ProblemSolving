#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string cman, nyman, fname;
    cin >> cman >> nyman >> fname;

    string cnyman = cman + nyman;
    sort(cnyman.begin(), cnyman.end());
    sort(fname.begin(), fname.end());

    if(cnyman.length() == fname.length()){
        for(int i = 0; i < cnyman.length(); i++){
            if(cnyman[i] == fname[i]){

            }else{
                cout << "NO";
                return 0;
            }
        }
    }else{
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}