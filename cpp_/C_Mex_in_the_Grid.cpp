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
//    for(int i = 0; i < n; i++){

//    }
 
//    cout << 
//    return;
vector<vector<int>>v(n ,vector<int>(n,0));
 int l = n;
 
 if(n % 2 == 0){
 l = ceil((double)n/2);
 l--;
 }
 else{
    l = n/2;
 }

 int p = 0;
 for(int i = l; i < n; i++){
    for(int j = l; j < n; j++){
         v[i][j] = p;
         p++;
         
    }
 }
 
 for(int i = 0; i < n; i++){
    
    for(int j = n-1; j >=0; j--){
        if(i == l && j == l){
            continue;
        }
        if( v[i][j] == 0){
         v[i][j] = p;
         p++;
         
    }}
 }
 for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
       cout << v[i][j] << " ";
         
    }
    cout << endl;
 }
 


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