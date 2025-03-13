#include <iostream>
using namespace std;



void Parameterised(int n, int sum){
    // Parameterised Way 
    if(n < 1){
        cout << sum;
        return;
    }
    Parameterised(n-1, sum+n);
}

int functional(int n){
    if(n == 0) return 0;
    
    return n + functional(n-1);

}

int factorial(int n){
    if(n == 1) return 1;
    return n* factorial(n-1);
}


int main() {
    int n;
    cin >> n;
    int i = 0;
    // Parameterised(n, i);
    // int sum = functional(n);    
    // cout << sum;

    int factorialValue = factorial(n);
    cout << factorialValue;

    return 0;
}
