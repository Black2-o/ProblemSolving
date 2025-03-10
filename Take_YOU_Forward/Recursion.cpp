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


int main() {
    int n;
    cin >> n;
    int i = 0;
    r1(i, n);
    return 0;
}
