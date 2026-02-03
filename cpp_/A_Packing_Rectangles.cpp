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
  bool check(int m, int w, int h, int n){
      if (m / w == 0 || m / h == 0) return false;
    if(m/w >= n || (m/h >= n)){
        return true;
    }
    int cnt = (m/w)* (m/ h);
   
return (cnt >= n) ? true : false;
  }

  void solve(){
   int w, h, n;
   cin >> w >> h >> n;
  
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
  
   int i = 1;
   int j = (int)1e18;
   int ans = -1;
   while(i <= j){
    int m = i + (j - i)/2;
    if(check(m, w, h, n)){
        ans = m;
        j = m - 1;
    }
    else{
        i = m + 1;
    }
   }
   cout << ans << endl;
    
  
  
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

