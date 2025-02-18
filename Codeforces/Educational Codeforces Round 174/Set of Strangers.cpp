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
    int n, m;
    cin >> n >> m;
    int total = n * m;

    vector<int> grid(total);
    for (int i = 0; i < total; i++)
    {
        cin >> grid[i];
    }

    int size = total + 1;
    vector<int> colorCost(size, 0);
    vector<bool> present(size, false);

    for (int i = 0; i < total; i++)
    {
        int c = grid[i];
        if (!present[c])
        {
            present[c] = true;
            colorCost[c] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int idx = i * m + j;
            int c = grid[idx];
            if (j + 1 < m && grid[idx + 1] == c)
                colorCost[c] = 2;
            if (i + 1 < n && grid[(i + 1) * m + j] == c)
                colorCost[c] = 2;
        }
    }

    ll S = 0;
    int best = 0;
    for (int c = 1; c < size; c++)
    {
        if (present[c])
        {
            S += colorCost[c];
            best = max(best, colorCost[c]);
        }
    }

    int ans = static_cast<int>(S - best);
    cout << ans << '\n';

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
