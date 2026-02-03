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
  int a , b ,k;
  cin >> a >> b >> k;
   if(k >= a && k >= b){
    cout << "Alice" << endl;
    return;
   }
   if((k*2) < max(a, b)){
    cout << "Bob" << endl;
    return;
   }
   else{
        if(min(a,b) > k){
            cout <<"Bob"<< endl;
            return;
        }
        else{
            cout << "Alice" << endl;
            return;
        }
   }

//     int n
//     cin >> n;
//    //  cout << 2 * n << endl;
//    // string s;
//    // cin >> s;

  

 
  
  
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