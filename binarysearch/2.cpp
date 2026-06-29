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

    int n,m,k;
    cin>>n>>m>>k;
    int cnt = 0;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>brr(m);
    for(int j=0; j<m; j++){
        cin>>brr[j];
    }
    sort(all(arr));
    sort(all(brr));
    int i=0; 
    int j=0;
    while(i < n && j < m){
    if(abs(arr[i] - brr[j]) <= k){
        cnt++;
        i++;
        j++;
    }
    else if(brr[j] < arr[i] - k){
        j++;
    }
    else{
        i++;
    }
}

    cout<<cnt;


}
