
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Calculate the prefix sum of array a
    vector<long long> prefixSum(n);
    prefixSum[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }

    for (int i = 0; i < q; ++i) {
        long long k;
        cin >> k;

        // Binary search to find the position where the AND value changes
        int left = 0, right = n - 1;
        int ans = -1;

        while (left <= right) {
            int mid = (left + right) / 2;

            long long operationsNeeded = (mid + 1) * a[mid] - prefixSum[mid];

            if (operationsNeeded <= k) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Calculate the maximum bitwise AND after k operations
        if (ans == -1) {
            cout << "0\n";
        } else {
            long long result = a[ans] - ((k - prefixSum[ans]) / (ans + 1));
            cout << result << endl;
        }
    }

    return 0;
}
