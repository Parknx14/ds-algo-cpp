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
    
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<int>v(5);
    int  sum = 0;
    int cnt = 5;
   for(int i = 0; i < 5; i++){
    cin >> v[i];
     if(v[i] > 0){
        sum += v[i];
     }
    
   }
   if((double)sum / 5 >= 7){
    cout << 0 << endl;
    return;
   }
   else{
    int ans = 0;
    sort(v.begin(),v.end());
    int i = 0;
     while((double)sum/ 5 < 7 && i < 5){
          sum -= v[i];
          sum += 10;
         ans += 100;
         i++;
         cnt--;
     }
     cout << ans << endl;
   }
 
   
}

int32_t main() {
      
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int t;
    cin >> t;
    while(t--){
        solve();
    }
   //  solve();

   
    
    }