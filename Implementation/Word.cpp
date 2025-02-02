#include <iostream>
#include <string>
using namespace std;





int main(){
    string word;
    int upper = 0;
    int lower = 0;

    cin >> word;

    int length = word.length();


    for (int i = 0; i < length; i++) {
        if (isupper(word[i])) {
           upper++;
        } else {
            lower++;
        }
    }

    if (upper < lower || upper == lower) {
        for (auto& x : word) { 
            x = tolower(x); 
        } 
    } else {
        for (auto& x : word) { 
            x = toupper(x); 
        } 
    }

    cout << word ;

    return 0;

} 