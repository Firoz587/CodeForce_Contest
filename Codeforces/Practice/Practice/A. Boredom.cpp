/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_a = *max_element(a.begin(), a.end());

    vector<long long> count(max_a + 1, 0);
    for (int num : a) {
        count[num]++;
    }

    vector<long long> dp(max_a + 1, 0);

    dp[0] = 0;
    dp[1] = count[1] * 1;

    for (int i = 2; i <= max_a; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + count[i] * i);
    }

    cout << dp[max_a] << endl;
}
int main()
{
    faster;
    int t=1;
    //cin>>t;
    while(t--)
    {
       Firoz();
    }
    return 0;
}
