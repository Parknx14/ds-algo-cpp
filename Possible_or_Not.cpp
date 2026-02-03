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
  // int a , b c, ;
  // cin >> a >> b >> c;
   
    int n, m;
    cin >> n >> m;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<int>v(n);
   for(int i = 0; i < n; i++){
    cin >> v[i];
   }
   
   vector<int>ans;
   for(int i = 0; i < 32; i++){
       if(m & (1 << i)){
        ans.push_back(i);
       }
   }
   for(int i  = 0; i < n; i++){
    int flag = 0;
     for(int j =0; j < ans.size(); j++){
             if((v[i] & (1 << ans[j]) ) == 0){
                flag = 1;
                break;
             }
     }
     if(flag == 0){
        cout << "YES" << endl;
        return;
     }
   }
   cout << "NO" << endl;

  
  
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