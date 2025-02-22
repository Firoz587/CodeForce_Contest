#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int ar[n];
    long long int ar1[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i==0)
        {
            ar1[i]=ar[i];
        }
        else
        {
            ar1[i]=ar[i]+ar1[i-1];
        }
    }
    while(m--)
    {
        long long int start,end;
        cin>>start>>end;
        start--;
        end--;
        long long int sum =ar1[end]-ar1[start]+ar[start];
        cout<<sum<<endl;

    }
    return 0;
}
