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
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 1) count1++;
        else if(v[i] == 2) count2++;
        else if(v[i] == 3) count3++;
        else if(v[i] == 4) count4++;
    }

    int groups = count4;
    int minGroups = min(count3, count1);
    groups += count3;
    count1 -= minGroups;

    groups += count2 / 2;
    count2 = count2 % 2;

    if(count2){
        groups++;
        count1 = max(0, count1 - 2);
    }

    groups += (count1 + 3) / 4;

    cout << groups << endl;
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
