/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
        int n, k, p;
        cin >> n >> k >> p;

        if (k < -n * p || k > n * p)
        {
            cout << -1 << endl;
            continue;
        }
        int mn = abs(k) / p;
        if (abs(k) % p != 0)
        {
            mn++;
        }

        mn = min(mn, n);

        cout << mn << endl;
    }
    return 0;
}

