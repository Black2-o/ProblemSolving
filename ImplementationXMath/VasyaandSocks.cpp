#include <iostream>
using namespace std;



int main() {
    int n, m;
    cin >> n >> m;

    int socks = n;

    int day = 0;
    while(socks > 0){
        socks--;
        day++;
        if(day%m == 0){
            socks++;
        }
    }
    cout << day;

    return 0;
}