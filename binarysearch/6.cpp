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

    int t;
    cin >> t;

    vector<pair<int,int>>arr(t);
    for(int i=0; i<t; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(all(arr),[](auto &a, auto &b){
        return a.second<b.second;
    });
    int i = 0;
    int cnt = 0;
    int last = INT_MIN;
    while(i<arr.size()){
        
        if(arr[i].first >= last){
            cnt++;
            last = arr[i].second;
            i++;
        }
        else{
            i++;
        }
    }
    cout<<cnt;
}