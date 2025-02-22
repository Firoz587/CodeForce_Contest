#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && a!=c)
        {
            cout<<c<<endl;
        }
        else if(a==c && a!=b)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
    return 0;
}
