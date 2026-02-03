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
   int small = ceil((double)n/2);
   int cnt = 0;
   int big = 0;
   for(int i = 0; i < n; i++){
    cin >> v[i];
    if( i > 0){
        if(abs(v[i]) < abs(v[0])){
            cnt++;
        }
        else if(abs(v[i]) > abs(v[0])){
            big++;
        }
    }


   }
   small--;
   int val =small - cnt;
    if(big == 0 && val > 0){
        cout << "NO" << endl;
        return;
    }
   

   if(small <= big){
    cout << "YES" << endl;
    return;
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