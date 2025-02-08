#include <iostream>
#include <cmath>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here
	int sum = 0;
	int dub = n;
	int count = (int) (log10(n) + 1);
	while(n > 0){
		sum += pow((n%10), count);
		n/=10;
	}
    // cout << "Sum is " << sum << " DUB is " << dub << endl;
	if(sum == dub){
		return true;
	}else{
		return false;
	}
}




int main() {
    int n;
    cin >> n;
    cout << checkArmstrong(n) << endl;
    return 0;
}