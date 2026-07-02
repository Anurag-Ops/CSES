#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    int a=0;
    for(int i=0; i<arr.size(); i++){
        int lost = x-arr[i];
        if(mp.find(lost)!=mp.end()){
            cout<<mp[lost]+1<<" "<<i+1;
            a++;
            break;
        }
        mp[arr[i]]=i;
    }
    if(a==0){
        cout<<"IMPOSSIBLE";
    }

}