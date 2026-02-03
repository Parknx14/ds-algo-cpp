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

 bool check(int m, vector<int>&v, int k){
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
         cnt += (v[i]/ m);
    }
    return (cnt >= k) ? true : false;
 }
  void solve(){
   int n, k;
   cin >> n >> k;
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
  
 for(int i = 0; i < n; i++){
    cin >> v[i];
   
   }
   sort(v.begin(), v.end());
   int i = 0;
   int j = v[n-1];
   double ans = -1;
   while(i <= j){
    double m = (double)(((double)i + (double)j)/2.0);
    if(check((int)m, v, k)){
        i = m + 1;
        ans = m;
    }
    else{
        j = m - 1;
    }
   }
   cout << fixed <<setprecision(6)<< ans << endl;
    
  
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
   solve();
    
}

