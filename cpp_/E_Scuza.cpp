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
    int n , q;
    cin >> n >> q;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;

   vector<int>a(n), maxii(n);

   for(int i = 0; i < n; i++){
    cin >> a[i];
     if(i == 0){
        maxii[0] = a[i];
     }
     else{
        maxii[i] = max(maxii[i-1], a[i]);
     }
   }
   vector<int>b(q);
   for(int i = 0; i < q; i++){
    cin >> b[i];
   }
vector<int>prefix(n);
prefix[0] = a[0];

for(int i = 1 ; i < n; i++){
     prefix[i] = prefix[i-1] + a[i];
}
 for(int i = 0; i < q; i++){
    int ans = upper_bound(maxii.begin(), maxii.end(), b[i]) - maxii.begin();
     if(ans == 0){
        cout << 0 <<  " ";
     }
     else{
        cout <<prefix[ans - 1] << " ";
     }
 }
 cout << endl;
 

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