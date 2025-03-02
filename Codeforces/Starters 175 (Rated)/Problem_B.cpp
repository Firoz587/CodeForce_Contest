#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    while (x--) {
        int y;
        cin >> y;
        string a, b, c;
        cin >> a >> b >> c;

        int d[3] = {0, 0, 0};
        for (int i = 0; i < y; i++) {
            if (a[i] == '1') d[0]++;
            if (b[i] == '1') d[1]++;
            if (c[i] == '1') d[2]++;
        }
        int e = d[0] + d[1] + d[2];

        if (e == 0 || e == 3 * y) {
            cout << "0\n";
        } else if (e == y) {
            int f = max({d[0], d[1], d[2]});
            cout << y - f << "\n";
        } else if (e == 2 * y) {
            int g = min({d[0], d[1], d[2]});
            cout << g << "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
