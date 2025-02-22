#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       int n;
       cin>>n;
       int a[n];
       long long int sum=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           sum+=a[i];
       }
       long long int r=sqrt(sum);
       if(r*r==sum)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}

