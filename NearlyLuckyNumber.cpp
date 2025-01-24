#include <iostream>
#include <string>
using namespace std;





int main(){
    string n;
    cin >> n;
    int length = n.length();
    int k = 0;


    for (int i = 0; i < length; i++) {
        if(n[i] == '4' or n[i] == '7'){
            k += 1;
        }
    }
    
    if(k == 4 or k == 7){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
} 