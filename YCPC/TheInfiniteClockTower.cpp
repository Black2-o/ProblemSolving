#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

struct Matrix {
    ll m[10][10];
    Matrix() {
        memset(m, 0, sizeof(m));
    }
    Matrix operator*(const Matrix& other) const {
        Matrix res;
        for (int i = 0; i < 10; ++i) {
            for (int k = 0; k < 10; ++k) {
                ll s = m[i][k];
                if (s == 0) continue;
                for (int j = 0; j < 10; ++j) {
                    res.m[i][j] = (res.m[i][j] + s * other.m[k][j]) % MOD;
                }
            }
        }
        return res;
    }
};

Matrix matrix_pow(Matrix a, ll power) {
    Matrix result;
    for (int i = 0; i < 10; ++i) {
        result.m[i][i] = 1;
    }
    while (power > 0) {
        if (power % 2 == 1) {
            result = result * a;
        }
        a = a * a;
        power /= 2;
    }
    return result;
}

Matrix build_transition_matrix() {
    Matrix m;
    for (int i = 0; i < 10; ++i) {
        int val = i + 2;
        string s = to_string(val);
        for (char c : s) {
            int digit = c - '0';
            m.m[i][digit]++;
        }
    }
    return m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Matrix M = build_transition_matrix();
    int T;
    cin >> T;
    
    while (T--) {
        string N;
        ll H;
        cin >> N >> H;
        Matrix M_pow = matrix_pow(M, H);
        ll total = 0;
        for (char c : N) {
            int d = c - '0';
            ll sum = 0;
            for (int j = 0; j < 10; ++j) {
                sum = (sum + M_pow.m[d][j]) % MOD;
            }
            total = (total + sum) % MOD;
        }
        cout << total << '\n';
    }
    
    return 0;
}