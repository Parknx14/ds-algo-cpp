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
   int n;
   cin >> n;
   vector<int>a(n), b(n);
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
  
   for(int i = 0; i < n; i++){
      cin >> a[i];
   }
   for(int i = 0; i < n; i++){
      cin >> b[i];
   }
   int maxi = *max_element(a.begin(), a.end());
   for(int i = 0; i < n; i++){
     int take = maxi - b[i];
     int sub = (take <= b[i]) ?take: b[i];
     a[i] += sub;
     b[i] -= sub;

   }
   for(int i = 0;  i < n; i++){
     if(b[i] > 0){
        int rem = b[i]/
     }
   }
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

