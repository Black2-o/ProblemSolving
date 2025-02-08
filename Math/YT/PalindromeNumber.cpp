#include <iostream>
#include <cmath>
using namespace std;

bool palindrome(int n)
{
    int x = n;
    int reverse = 0;
    while(n > 0){
		reverse = (reverse*10) + (n%10);
		n/=10;
	}
    if(reverse == x){
        return true;
    }else{
        return false;
    }
}


int main() {
    int n;
    cin >> n;
    if(palindrome(n)){
        cout << true << endl;
    }else{
        cout << false << endl;
    }

    return 0;
}
