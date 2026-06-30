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
    vector<int>ch(n);
    for(int i=0; i<n; i++){
        cin>>ch[i];
    }
    int bamdola = 0;
    int i=0;
    int j=ch.size()-1;
    sort(all(ch));
    while(i<=j){
        if(i==j){
            bamdola++;
            break;
        } 
        if(ch[i]+ch[j]<=x){
            bamdola++;
            i++;
            j--;
        }
        else{
            bamdola = bamdola+1;
            j--;
        }
    }
    cout<<bamdola;
}