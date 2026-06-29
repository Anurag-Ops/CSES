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
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int cnt =1;
    sort(all(arr));
    for(int i=0; i<n-1; i++){
        if(arr[i]!=arr[i+1]) cnt++;
    }
    cout<<cnt;
}