#include <iostream>
#include <string>
using namespace std;


int main() {
    string x;
    cin >> x;

    if(x[0] == '9'){
        cout << '9';
    }else{
        char ch = x[0];
        int num = stoi(string(1, ch));
        if ((9-num) > num){
            cout << num;
        }else {
            cout << 9-num;
        }
    }

    for(int i = 1;i < x.length(); i++){
        char ch = x[i];
        int num = stoi(string(1, ch));
        if ((9-num) > num){
            cout << num;
        }else {
            cout << 9-num;
        }
    }

}