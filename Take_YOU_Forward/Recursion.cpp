#include <iostream>
using namespace std;



void r1(int i, int n){

    // #Learned
    // - Recursion
    // - Base Case 
    // - Stack Overflow / Stack Spaces 
    // - Recursion Tree 

    if(i >= n) return;
    
    cout << i << "\n";
    i++;
    r1(i, n);
}
void r2(int i, int n){
    // if(i >= n) return;
    // // cout << "Black" << "\n";
    // cout << i+1 << "\n";
    // i++;
    // r2(i, n);


    // if(n < 1) return;
    // cout << n << "\n";
    // n--;
    // r2(i, n);

    // // Backtracking
    // if(i < 1) return;
    // r2(i-1, n);
    // cout << i << "\n";

    // Backtracking
    if(i > n) return;
    r2(i+1, n);
    cout << i << "\n";
}

int main() {
    int n;
    cin >> n;
    int i = 0;
    r2(i, n);
    return 0;
}
