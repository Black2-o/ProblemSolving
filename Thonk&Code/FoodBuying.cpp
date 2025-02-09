#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    for(int t = 0; t < tc; t++){
        int m;
        cin >> m;
        // int spend = 0;
        // while(m >= 10){
        //     if(m >= 10){
        //         m-=10;
        //         m++;
        //         spend+=10;
        //     }
        // }
        // cout << spend+m << endl;
        cout << m + (m - 1) / 9 << "\n";
    }

    return 0;
}