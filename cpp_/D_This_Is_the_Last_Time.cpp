/*
   jai Bajrang Bali
   author : Himanshu Dhruw
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;



void solve(){
    int n, k;
    cin >>n>> k;
    vector<pair<pair<int, int>, int>>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first.first>>v[i].first.second >>v[i].second;
    }
    auto lamda = [&](pair<pair<int,int>,int>&p1, pair<pair<int,int>,int>&p2){
         return p1.first.first < p2.first.first;
    };
    sort(v.begin(), v.end(),lamda);
    int sum = k;
    for(int i = 0; i < n; i++){
        if(v[i].first.first <=sum && sum<= v[i].first.second){
            sum= max(sum, v[i].second);
        }
    }
    cout << sum << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
