#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string reverse_word;
    bool condition = true;
    cin >> word >> reverse_word;



    int n = word.length();
    int j = n - 1;
    for (int i = 0; i < n; i++) {
        if (word[i] != reverse_word[j]) {
            // cout << "Word i is " << word[i] << " Word j is " << word[j] << endl;
            cout << "NO";
            condition = false;
            break;   
        }
        j--;
    }

    if (word.length() != reverse_word.length() and condition){
        cout << "NO";
        condition = false;
    }

    if (condition){
        cout << "YES";
    }

    return 0;
}