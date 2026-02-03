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
   //  cout << 2 * n << endl;
   string s;
   cin >> s;
   map<char, int>m;
  
   for(int i = 0; i < n; i++){
          m[s[i]]++;
   }
    int len = n;
   int maxii = 1;
   for(auto it : m){
     maxii = max(it.second, maxii);
   }
   if(maxii == 1){
    cout << n % 2 << endl;
    return;
   }
    int rem = n - maxii;
   if(maxii > rem){
    maxii -= rem;
    cout << maxii << endl;
    return;
   }
   rem -= maxii;
    cout << rem % 2 << endl;
   
   

}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int t;
    cin >> t;
    while(t--){
        solve();
    }
   

   
    
    }