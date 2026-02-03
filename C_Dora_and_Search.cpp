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
//    string s;
//    cin >> s;

   vector<int>v(n);
   for(int i = 0; i < n; i++){
    cin >> v[i];
   }
if(n <= 3){
    cout << -1 << endl;
    return;
}
 for(int i =0; i <= n- 4; i++){
    
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int j = i + 3;
    for(int k= i;k < j || k < n; k++ ){
         maxi = max(maxi, v[k]);
         mini = min(mini, v[k]);
    }
    if(maxi == v[i] || maxi == v[j] || mini == v[i] || mini == v[j]){
        continue;
    }
    else{
        cout << i+1 <<" "<< j+1 << endl;
        return;
    }
 }
 cout << -1 << endl;


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