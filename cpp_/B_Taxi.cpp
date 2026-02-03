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
   for(int i = 0; i < n; i++){
    cin >> v[i];
   }
   int cnt = 0;
   int sum = 0;
   int i = 0;
   sort(v.begin(), v.end());
   while(i < n){
        while(sum + v[i] <= 4){
            sum += v[i];
            i++;
        }
       
        cnt++;
        sum = 0;
        
   }
   cout << cnt << endl;
 
  
  
}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
   //  int t;
   //  cin >> t;
   //  while(t--){
   //      solve();
   //  }
    solve();

    // cout << 100 % 12<< endl;
    
    }