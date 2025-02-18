/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);
#define MOD 998244353

using namespace std;

int main() {
    int t;
    cin >> t;

    const int MAXP = 200005;
    vector<ll> power2(MAXP), invPower2(MAXP);

    power2[0] = 1;
    for (int i = 1; i < MAXP; i++) {
        power2[i] = (power2[i - 1] * 2LL) % MOD;
    }

    ll inv2 = 499122177;
    invPower2[0] = 1;
    for (int i = 1; i < MAXP; i++) {
        invPower2[i] = (invPower2[i - 1] * inv2) % MOD;
    }

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll result = 0, sum1 = 0;
        int count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                sum1 = (sum1 + invPower2[count2]) % MOD;
                count1++;
            } else if (arr[i] == 2) {
                count2++;
            } else if (arr[i] == 3) {
                ll contrib = ((power2[count2] * sum1) % MOD - count1) % MOD;
                if (contrib < 0) contrib += MOD;
                result = (result + contrib) % MOD;
            }
        }

        cout << result << "\n";
    }

    return 0;
}
