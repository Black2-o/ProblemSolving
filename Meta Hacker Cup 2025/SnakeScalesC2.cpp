#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> p;
    DSU(int n) : p(n) { iota(p.begin(), p.end(), 0); }
    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        p[b] = a;
        return true;
    }
};

int main() {
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++) {
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<tuple<long long,int,int>> edges;
        for (int i = 1; i <= n; i++) edges.push_back({a[i], 0, i});
        for (int i = 1; i < n; i++) edges.push_back({llabs(a[i] - a[i + 1]), i, i + 1});

        sort(edges.begin(), edges.end());
        DSU dsu(n + 1);
        long long ans = 0;
        int merged = 0;

        for (auto &e : edges) {
            long long w; int u, v;
            tie(w, u, v) = e;
            if (dsu.unite(u, v)) {
                ans = max(ans, w);
                merged++;
                if (merged == n) break;
            }
        }

        cout << "Case #" << cs << ": " << ans << "\n";
    }
}
