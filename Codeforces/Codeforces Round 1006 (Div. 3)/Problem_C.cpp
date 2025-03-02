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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int l = 0, r = 0, d = 0;

        for (int i = 0; i < n; i++) {
            int g = 0, s = 0;
            for (int j = i + 1; j < n; j++) {
                if (a[j] > a[i]) g++;
                else if (a[j] < a[i]) s++;

                int x = g - s;
                if (x < d) {
                    d = x;
                    l = i;
                    r = j;
                }
            }
        }

        cout << l + 1 << " " << r + 1 << "\n";
    }
    return 0;
}
