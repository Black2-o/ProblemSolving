#include <iostream>
#include <string>
using namespace std;



int main(){
    int n;
    string match;
    cin >> n >> match;
    int anton = 0;
    int danik = 0;

    for (int i = 0; i < n; i++) {
        if(match[i] == 'A'){
            // cout << i << " Anton added" << endl;
            anton++;
        }else{
            // cout << i << " Danik added" << endl;
            danik++;
        }
    }
    // cout << "Anton " << anton << " Danik " << danik << endl;
    if (anton > danik){
        cout << "Anton";
    }else if(danik > anton){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }

    return 0;
} 