#include <iostream>
using namespace std;




int main() {
    int a, b;
    cin >> a >> b;

    int mf = 0;

    while(a > 0 and b > 0){
        a--;b--;
        mf++;
    }

    int mwf;
    if(b==0) mwf = a / 2;
    else mwf = b / 2;

    cout << mf << " " << mwf;


    return 0;
}