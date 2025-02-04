#include <iostream>
#include <vector>
using namespace std;

// Custom gcd function.
long long gcd(long long a, long long b) {
    while(b) {
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    long long m;
    cin >> n >> m;
    
    vector<long long> w(n);
    for (int i = 0; i < n; i++){
        cin >> w[i];
    }
    
    // Special case: only one chicken.
    if(n == 1){
        cout << m << "\n";
        return 0;
    }
    
    // Compute the sum of weights.
    long long sum = 0;
    for(auto weight : w)
        sum += weight;
    
    // Compute gcd of all weights using our custom gcd.
    long long g = w[0];
    cout << "Before using GCD g is " << g << endl;
    for (int i = 1; i < n; i++){
        g = gcd(g, w[i]);
        cout << "In loop gcd is " << g << endl;
    }
    cout << "AFter using GCD g is " << g << endl;
    
    // Let X = sum / g.
    // This is the minimum biscuits needed for a valid distribution.
    cout << "SUm is " << sum << "  And G is " << g << endl;
    long long X = sum / g;
    

    cout << "M is here " << m << " And X is " << X << endl;
    // If we don't even have enough biscuits for the minimum distribution, answer is 0.
    if(m < X){
        cout << 0 << "\n";
        return 0;
    }
    
    // Maximum multiplier r such that r * X <= m.
    long long r = m / X;
    cout << "R is  here " << r << endl;
    
    // The answer is r * X.
    long long ans = r * X;
    cout << ans << "\n";
    
    return 0;
}
