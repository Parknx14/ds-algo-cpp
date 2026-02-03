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
   for(int i = 0; i < n; i++){
    cin >> v[i];
   }
   if(n == 1){
    cout << "YES" << endl;
    return;
   }
   int arr[n+1] ;
  arr[0] = v[0];
  arr[n] = v[n-1];
   for(int i= 1; i<= n-1; i++){
     arr[i] = v[i] * v[i-1]/ __gcd(v[i],v[i-1]);
   }
   for(int i = 1; i <= n; i++){
     if(__gcd(arr[i],arr[i-1]) != v[i-1]){
        cout << "NO" << endl;
        return;
     } 
   }
   cout << "YES" << endl;
             
  
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