#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> boxes(n);
        for (int i = 0; i < n; ++i) {
            cin >> boxes[i];
        }

        vector<int> sorted_boxes = boxes;
        sort(sorted_boxes.begin(), sorted_boxes.end());

        bool possible = true;

        for (int i = 0; i < n; ++i) {
            if (boxes[i] != sorted_boxes[i]) {
                int j = i + 1;
                while (j < n && boxes[j] != sorted_boxes[i]) {
                    ++j;
                }

                if (j - i+1 > k) {
                    possible = false;
                    break;
                }

                reverse(boxes.begin() + i, boxes.begin() + j + 1);
                i = j;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

