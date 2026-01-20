#include <iostream>
#include <string>
#include <algorithm>
// #include <cctype>    
using namespace std;




int main(){
    string word;
    getline(cin, word);
    transform(word.begin(), word.end(), word.begin(),
        [](unsigned char c){ return std::tolower(c); });

    for(int i = 0; i < word.length(); i++){
        if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' && word[i] != 'y'){
            cout << "." << word[i];
        }
    }
    return 0;
} 