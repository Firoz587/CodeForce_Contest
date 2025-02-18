#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(m--)
    {
        int x;
        cin>>x;
        auto it = find(v.begin(),v.end(),x);
        if(it==v.end())
        {
            cout<<"not found"<<endl;
        }
        else
        {
            cout<<"found"<<endl;
        }
    }
    return 0;
}
