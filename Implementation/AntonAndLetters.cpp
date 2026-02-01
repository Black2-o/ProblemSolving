#include <iostream>
#include <string>
#include <set>
using namespace std;


int main(){
    set<int> s;
    string sets;
    getline(cin, sets);


    for(int i = 1; i < sets.length()-1; i++){
        if(sets[i] != ',' and sets[i] != ' '){
            // cout << sets[i];
            s.insert(sets[i]);
        } 
    }

    cout << s.size();

    return 0;
}
