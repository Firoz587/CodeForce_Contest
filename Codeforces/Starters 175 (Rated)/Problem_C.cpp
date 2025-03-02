#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (x == 1) {
            unordered_map<int, int> f;
            int m = 0;
            for (int num : a) {
                f[num]++;
                if (f[num] > m) {
                    m = f[num];
                }
            }
            cout << m << "\n";
            continue;
        }

        unordered_map<int, int> f;
        for (int num : a) {
            f[num]++;
        }

        map<pair<int, int>, vector<int>> c;
        for (int num : a) {
            pair<int, int> p1 = {num, num * x};
            c[p1].push_back(1);
            if (num % x == 0) {
                int u = num / x;
                pair<int, int> p2 = {u, num};
                c[p2].push_back(-1);
            }
        }

        int r = 0;
        if (!f.empty()) {
            for (auto& p : f) {
                if (p.second > r) {
                    r = p.second;
                }
            }
        }

        for (auto& p : c) {
            int curr = 0;
            int lm = 0;
            for (int val : p.second) {
                curr += val;
                if (curr < 0) {
                    curr = 0;
                }
                if (curr > lm) {
                    lm = curr;
                }
            }
            int cf = f[p.first.second] + lm;
            if (cf > r) {
                r = cf;
            }
        }

        cout << r << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
