#include <iostream>
using namespace std;

int main() {
    int first, second;
    cin >> first >> second;

    if((second-first <= 2 && second - first > 0) || (first-second <= 3 && first-second > 0)){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}
