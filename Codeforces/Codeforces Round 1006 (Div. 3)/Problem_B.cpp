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
    string s;
    cin >> s;


    ll c1 = 0, c2 = 0;
    for (char c : s)
    {
        if (c == '-') c1++;
        else c2++;
    }

    if (c1 < 2 || c2 == 0)
    {
        cout << 0 << endl;
        return;
    }

    ll mx= ((c1*c1/2)/2 * c2);
    cout << mx << endl;
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

