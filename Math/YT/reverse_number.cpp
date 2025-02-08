#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	if(n < 1){
		cout << n;
		return 0;
    }

	int reverse = 0;

    // int c = (int) (log10(n) + 1);
	// for(int i = c-1; i >= 0; i--){
	// 	reverse += pow(10, i) * (n%10) ;
	// 	n/=10;
	// }

	while(n > 0){
		reverse = (reverse*10) + (n%10);
		n/=10;
	}

	cout << reverse;
}
