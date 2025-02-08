#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n){
	// Write your code here.
	// int count = 0;
	// while(n > 0){
	// 	n = n/10;
	// 	count++;
	// }	
	int count = (int) (log10(n) + 1);
	return count;
}



int main() {
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;
}