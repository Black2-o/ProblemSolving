#include <iostream>
using namespace std;



int main() {
    int n;
    int k;
    cin >> n >> k;

    int timeHas = 4*60;

    timeHas -= k;

    int canSolve = 0;
    for(int i = 1; i <= n; i++){
        timeHas -= i*5;
        if(timeHas >= 0){
            canSolve++;
        }
    }

    cout << canSolve;

    return 0;
}