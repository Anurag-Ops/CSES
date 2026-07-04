// // #include <bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// #define int long long
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define endl '\n'

// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     vector<int>arr(t);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     int cs = arr[0];
//     int ms = arr[0];
//     for(int i=1; i<arr.size(); i++){
//         cs = max(arr[i],arr[i]+cs);
//         ms = max(cs,ms);
//     }
//     cout<<ms;

//     return 0;
// }