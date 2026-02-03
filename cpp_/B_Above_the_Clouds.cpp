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
//    vector<int>v(n);
   unordered_map<int,int>m;
   // set<int>s;
   string s;
   cin >> s;
  set<int>st;
 
   for(int i = 0; i < n; i++){
      m[s[i]]++;
   }
   for(int i = 1; i < n-1; i++){
     if(m[s[i]] >= 2){
        cout << "Yes" << endl;
        return;

     }
   }
   cout << "No" << endl;
   return;
   
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

