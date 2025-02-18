#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        char a[3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(a[i][j]=='?')
                {
                    if(j==0)
                    {
                        if(a[i][j+1]=='A' && a[i][j+2]=='B' || a[i][j+1]=='B' && a[i][j+2]=='A' )
                        {
                            cout<<"C"<<endl;
                        }
                        else if(a[i][j+1]=='B' && a[i][j+2]=='C' || a[i][j+1]=='C' && a[i][j+2]=='B')
                        {
                            cout<<"A"<<endl;
                        }
                        else
                        {
                             cout<<"B"<<endl;
                        }
                    }
                    else if(j==1)
                    {
                        if(a[i][j-1]=='A' && a[i][j+1]=='B' || a[i][j-1]=='B' && a[i][j+1]=='A')
                        {
                            cout<<"C"<<endl;
                        }
                        else if(a[i][j-1]=='B' && a[i][j+1]=='C' || a[i][j-1]=='C' && a[i][j+1]=='B')
                        {
                            cout<<"A"<<endl;
                        }
                        else
                        {
                            cout<<"B"<<endl;
                        }
                    }
                    else
                    {
                        if(a[i][j-1]=='A' && a[i][j-2]=='B'|| a[i][j-1]=='B' && a[i][j-2]=='A')
                        {
                            cout<<"C"<<endl;
                        }
                        else if(a[i][j-1]=='B' && a[i][j-2]=='C'|| a[i][j-1]=='C' && a[i][j-2]=='B')
                        {
                            cout<<"A"<<endl;
                        }
                        else
                        {
                            cout<<"B"<<endl;
                        }
                    }
                }
            }
        }

    }
    return 0;
}

