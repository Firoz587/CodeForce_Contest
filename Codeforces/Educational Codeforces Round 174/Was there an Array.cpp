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
    vector<int> b(n - 2);

    for (int i = 0; i < n - 2; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n - 4; i++)
    {
        if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
