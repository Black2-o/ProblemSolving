#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;
    int year = 0;


    while (a <= b) {
        // cout << "Limak is now " << a << " Bob is now " << b << " Year is now "<< year << endl;
        a = a*3;
        b = b*2;
        year++;
    }

    cout << year;

    return 0;
}