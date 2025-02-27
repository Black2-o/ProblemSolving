#include <iostream>
#include <vector>
#include <sstream>
using namespace std;



int main() {
    string str;
    getline(cin, str);


    stringstream ss(str);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    // Printing the words
    for (const auto &w : words) {
        for(int i = w.length()-1; i >=0 ; i--) cout << w[i];
        cout << " ";
    }

    return 0;
}