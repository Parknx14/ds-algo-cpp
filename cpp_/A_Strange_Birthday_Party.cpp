/*
   jai Bajrang Bali
   author : Himanshu Dhruw
*/
 
 
        101
        111
       1101
       0101



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

   vector<int>v(n), b(m);
   vector<pair<int,int>>vp;
   for(int i = 0; i < n; i++){
    cin >> v[i];
   }
      for(int i = 0; i < m; i++){
    cin >> b[i];
   }
 sort(v.begin(), v.end(), greater<int>());
 int sum = 0;
 int j = 0; 
 for(int i = 0; i < n ; i++){
     if(b[v[i] -1] > b[j]){
        sum += b[j];
        j++;
     }
     else{
        sum += b[v[i]-1];
     }
 }
  cout << sum << endl;



   

  

 
  
  
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