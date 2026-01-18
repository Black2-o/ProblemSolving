#include <iostream>
#include <vector>
using namespace std;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= 1000000007;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % 1000000007;
        base = (base * base) % 1000000007;
        exp /= 2;
    }
    return res;
}

long long modInverse(long long n) {
    return power(n, 1000000007 - 2);
}

const int MAX_EXP = 60;
long long fact[MAX_EXP];
long long invFact[MAX_EXP];

void precompute_factorials() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < MAX_EXP; i++) {
        fact[i] = (fact[i - 1] * i) % 1000000007;
        invFact[i] = modInverse(fact[i]);
    }
}

long long nCr_large_n(int k, long long n_mod) {
    if (k < 0) return 0;
    if (k == 0) return 1;
    if (k >= MAX_EXP) return 0;

    long long numerator = 1;
    for (int i = 0; i < k; ++i) {
        numerator = (numerator * ((n_mod + i) % 1000000007)) % 1000000007;
    }
    return (numerator * invFact[k]) % 1000000007;
}

long long count_ways(long long k, long long n_mod) {
    if (k == 1) return 1;
    long long total_ways = 1;

    for (long long i = 2; i * i <= k; ++i) {
        if (k % i == 0) {
            int count = 0;
            while (k % i == 0) {
                k /= i;
                count++;
            }
            total_ways = (total_ways * nCr_large_n(count, n_mod)) % 1000000007;
        }
    }
    if (k > 1) {
        total_ways = (total_ways * nCr_large_n(1, n_mod)) % 1000000007;
    }
    return total_ways;
}

void solve(int case_num) {
    long long n, a, b;
    cin >> n >> a >> b;

    vector<long long> divisors;
    for (long long i = 1; i * i <= b; ++i) {
        if (b % i == 0) {
            divisors.push_back(i);
            if (i * i != b) divisors.push_back(b / i);
        }
    }

    long long n_mod = n % 1000000007;
    long long total_sequences = 0;

    for (long long p1 : divisors) {
        if (p1 <= a) {
            long long p2 = b / p1;
            long long ways1 = count_ways(p1, n_mod);
            long long ways2 = count_ways(p2, n_mod);
            total_sequences = (total_sequences + (ways1 * ways2) % 1000000007) % 1000000007;
        }
    }

    cout << "Case #" << case_num << ": " << total_sequences << endl;
}

int main() {
    precompute_factorials();

    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
    }

    return 0;
}
