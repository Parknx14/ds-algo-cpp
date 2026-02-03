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

//    vector<int>v(n);
//    for(int i = 0; i < n; i++){
//     cin >> v[i];
//    }
     if(n % 2 != 0){
        cout << "YES" << endl;
        return;
     }
   if(n <= 4){
    cout << "NO" << endl;
    return;
   }
    while(n > 1){
         if(n % 2 != 0){
            cout << "YES" << endl;
            return;
         }
         
         n /= 2;
         

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