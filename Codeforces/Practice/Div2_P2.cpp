#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b;
        cin>>a>>b;
        long long result;
        long long  mx=1;
        long long r=a%b;
        if(r>1)
        {
            result=a/b;
            cout<<result<<endl;
        }
        else
        {
            result=mx+r;
            cout<<result<<endl;
        }
    }
    return 0;
}
