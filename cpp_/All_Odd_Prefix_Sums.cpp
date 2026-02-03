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
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
  int odd = 0;
  int even = 0;
 for(int i = 0; i < n; i++){
    cin >> v[i];
    if(v[i] % 2 == 0){
        even++;
    }
    else{
        odd++;
    }
   }
   if(odd == 1 && even == 0){
    cout << "Yes" << endl;
    return;
   }
   if(odd == 1 && even >= 1){
    cout << "Yes" << endl;
    return;
   }
   cout << "No" << endl;
    
  
  
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

