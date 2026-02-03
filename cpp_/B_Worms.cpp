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
   // string s;
   // cin >> s;

   vector<int>v(n);
   vector<int>ans;

  
   for(int i = 0; i < n; i++){
    cin >> v[i];


   }
   int k;
   cin >> k;
   vector<int>c(k);
   for(int i = 0;i < k; i++){
    cin >> c[i];
   }
    int prev = v[0];
   ans.push_back(1);
   ans.push_back(v[0]);
   
   for(int i = 1;i < n; i++){
      ans.push_back(prev +1);
      ans.push_back(v[i] + prev);
      prev = v[i] + prev;
   }
   for(int i = 0;i < k; i++){
     auto idx = lower_bound(ans.begin(),ans.end(), c[i] )- ans.begin();
     cout << ((idx )/2 ) +1 <<  endl;
   }
   

}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    // int t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
   

   solve();
    
    }