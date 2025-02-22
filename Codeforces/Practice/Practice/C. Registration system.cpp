#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> usernameCount;

    for (int i = 0; i < n; i++) {
        string username;
        cin >> username;

        if (usernameCount.find(username) == usernameCount.end()) {
            usernameCount[username] = 0;
            cout << "OK" << endl;
        } else {
            usernameCount[username]++;
            string newUsername = username + to_string(usernameCount[username]);
            usernameCount[newUsername] = 0;
            cout << newUsername << endl;
        }
    }

    return 0;
}
