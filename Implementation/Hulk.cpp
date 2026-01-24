#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s;

    for(int i = 1; i <= n; i++){

        if(i % 2 == 0){
            s += "I love ";
        }else{
            s += "I hate ";
        }
        

        if(i != n){
            s += "that ";
        }else{
            s += "it ";
        }    
    }

    cout << s;


    return 0;
}