#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        // Split the string into two halves
        string left = s.substr(0, n / 2);
        string right = s.substr(n / 2, n / 2);

        // Count frequency of characters in both halves
        map<char, int> left_count, right_count;

        for (char c : left) {
            left_count[c]++;
        }
        for (char c : right) {
            right_count[c]++;
        }

        // Calculate the number of differences in frequency
        int mismatch_count = 0;

        // For each character in the left half, check if it is in the right half
        for (auto& pair : left_count) {
            char c = pair.first;
            int left_freq = pair.second;
            int right_freq = right_count[c];
            if (left_freq > right_freq) {
                mismatch_count += left_freq - right_freq;
            }
        }

        // Output the result for the current test case
        cout << mismatch_count << endl;
    }

    return 0;
}
