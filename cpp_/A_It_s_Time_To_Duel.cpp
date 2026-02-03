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
   
    int n;
    cin >> n;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<int>v(n);
      set<int>s;
   for(int i = 0; i < n; i++){
    cin >> v[i];
    s.insert(v[i]);
   }
   if(s.size() == 1){
    cout << "YES" << endl;
    return;
   }

   for(int i = 0; i < n-1; i++){
       if(v[i] == v[i+1] && v[i] == 0){
        cout << "YES" << endl;
        return;
       }
   }


   cout << "NO"  << endl;
   

  

 
  
  
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