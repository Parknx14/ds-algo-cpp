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
  
 unordered_map<int, int>mp;
   for(int i = 0; i < n; i++){
      cin >> v[i];
       mp[v[i]] = i + 1;
 
   }
    
//    for(int i = 0; i < n; i++){
//       cout << 
//    }
//    cout <<
 int m;
 cin >> m;
 int f = 0;
 int s = 0;
 vector<int>q(m);

 for(int i = 0; i < m; i++){
    cin >> q[i];
   


 }
 for(int j = 0;  j < m; j++){
   
    f += mp[q[j]];
    s +=    n - mp[q[j]] + 1;
    }

 cout << f << " "<< s << endl;
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

