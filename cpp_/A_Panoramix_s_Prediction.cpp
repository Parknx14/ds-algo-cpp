/*

   This code belongs to HalfbloodPrince
*/
 
 
 





#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long int

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;
vector<bool>v(100001, true);
 void sieve(){
    v[1] = false;
    for(int i = 2; i * i < 10001; i++){
        for(int j = i * i ; j < 10001; j+= i){
                  if(j % i == 0){
                    v[j] = false;
                  }
        }
    }
 }
  
  void solve(){
   int n, m;
   cin >> n >> m;
   sieve();
//    vector<int>v(n);

//    for(int i = 0; i < n; i++){
//            cin >> v[i];
//    }
int j = n + 1;
   while(true){
     if(v[j]){
          break;
     }
     j++;
   }

if(v[m] == false || j != m){
    cout << "NO" << endl;
    return;
}
cout << "YES" << endl;
   
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
  
    
}

