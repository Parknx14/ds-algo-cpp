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
   
   // unordered_map<int,int>m;
   // set<int>s;
 cout << (n-1) + (n - 2) << endl;
 int num1 = 2;
   for(int i = 2; i <= n; i++){
      cout << i << " "<< 1 << " "<<num1 << endl;
      num1++;
   }
   int num = 2;
   int cnt = 0;
   for(int i = 1 ; i < n && num < n; i++){
    cout << i << " "<< num << " "<< n << endl;
    num++;
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

