/*
   jai Bajrang Bali
   author : Himanshu
*/
 
 
 





#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;



void solve() {
    int n, k;
    cin >> n  >> k;
    vector<int>a(n), b(n);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
     for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int  i =0; i < n; i++){
        pq.push({a[i], b[i]});
    }
    vector<int>ans;
    int sum = 0;
    priority_queue<int, vector<int>, greater<int>> topk;
    while(!pq.empty()){
        // int tt = pq.top().second;
        // sort(v.begin(), v.end(), greater<int>());
        // int sum = 0; 
        // for(int i = 0; i < v.size() && i < k; i++){
        //   sum += v[i];
        // }
        // ans.push_back(sum);
        // v.push_back(tt);
        // pq.pop();
        int tt = pq.top().second;
        
        while(topk.size() > k){
           
            sum -= topk.top();
            topk.pop();
        }
        ans.push_back(sum);
        sum += tt;
        topk.push(tt);
        pq.pop();
    }
    
   
 for(int i = 0; i < n; i++){
    cout << ans[a[i] - 1] << " ";
 }
 cout << endl;


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