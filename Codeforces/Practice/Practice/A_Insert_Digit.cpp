#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        int position=-1;
        for(int u=0;u<n;u++)
        {
            if(s[u]-'0'<d)
            {
                position=u;
                break;
            }
        }
        if(position != -1)
        {
            s.insert(position,to_string(d));
        }
        else
        {
            s+=to_string(d);
        }
        cout<<s<<endl;
    }
    return 0;
}
