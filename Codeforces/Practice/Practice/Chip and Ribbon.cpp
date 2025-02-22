/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz()
{
    int n;
    cin >> n;

    vector<int> a (n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    int last = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > last) ans += a[i] - last;
        last = a[i];
    }

    cout << ans - 1 << endl;
}
int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
        Firoz();
    }
    return 0;
}
