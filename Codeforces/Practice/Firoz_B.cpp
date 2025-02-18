#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        long long result = 0;
        long long prefix_sum = 0;

        for (int i = 1; i <= n; ++i) {
            prefix_sum += i*a[i];
            result = max(result, prefix_sum);
        }

        cout << result << endl;
    }

    return 0;
}
