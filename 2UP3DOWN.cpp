#include <iostream>
using namespace std;

int main() {
    int first, second;
    cin >> first >> second;

    if(first > second){
        int can_go_down = second +=3;
        if (can_go_down == first) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }else{
        int can_go_up = first -= 2;
        if (can_go_up == second){
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}