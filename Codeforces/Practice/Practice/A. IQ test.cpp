#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int odd = 0, even = 0;
    for(int i = 0; i < n; i++){
        if(v[i]%2 == 0) even++;
        else odd++;
    }
    int ans=0;
    if(odd>even)
    {
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)
            {
                ans=i;
                break;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==1)
            {
                ans=i;
                break;
            }
        }
    }
    cout<<ans+1<<endl;
}

int main() {
    faster;
    int t = 1;
    //cin >> t;
    while(t--) {
        Firoz();
    }
    return 0;
}
