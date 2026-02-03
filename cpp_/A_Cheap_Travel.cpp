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
    int n,m,a,b;
    cin >> n >> m >> a >> b;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;
   int x = b /m;
   int sum = 0;
   if(x < a){
    if(n % m == 0){
        cout <<(n/m)* b << endl;
    }
    else{
        sum = b * (n/m);
        int rem = n %m;
        if(rem * a < b){
            cout << sum + (rem * a);
        }
        else{
            cout << sum + b;
        }
    }
   }
   else{
   cout << n * a << endl;
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