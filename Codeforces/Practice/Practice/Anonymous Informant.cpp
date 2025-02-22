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
    ll n,k;
    cin>>n>>k;
    vector<ll> b(n);
    set<ll> s;
    for(int i=0; i<n; i++)
        cin>>b[i];


    ll m=n-1;


    for(int i=0; i<k; i++)
    {
        if(s.find(m) != s.end())
            break;

        if(b[m]>n)
        {
            cout<<"NO\n";
            return;
        }
        s.insert(m);
        m-=b[m];
        m+=n;
        m%=n;
    }

    cout<<"YES\n";
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
