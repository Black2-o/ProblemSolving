#include <iostream>
using namespace std;


// * Fibonacci - Re 5. Multiple Recursion Calls | Problems | Strivers A2Z DSA Course

// Exponcial 2^n  near this.

void fibonnacciforloop(int n){
    int a = 0;
    int b = 1;
    int num = 0;
    for(int i = 0; i < n-1; i++){
        num = a + b;
        a = b;
        b = num;
    }
    cout << num;
}

int fibonacci(int n){
    if(n <= 1) return n;

    return fibonacci(n-1) + fibonacci(n-2);
}



int main() {
    int n;
    cin >> n;

    // fibonnacciforloop(n);

    cout << fibonacci(n);

    return 0;
}
