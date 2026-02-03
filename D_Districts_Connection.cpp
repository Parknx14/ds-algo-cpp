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
  // int a , b c, ;
  // cin >> a >> b >> c;
   
    int n;
    cin >> n;
   //  cout << 2 * n << endl;
   // string s;
   // cin >> s;
   set<int>s;
   vector<int>v(n);
   map<int,int>m;
   for(int i = 0; i < n; i++){
    cin >> v[i];
    m[v[i]]++;
    s.insert(v[i]);
   }
   if(s.size() == 1){
    cout << "NO" << endl;
    return;
   }
   int temp = 0;
   for(int i = 1; i < n; i++){
     if(v[i] != v[0]){
           temp = i;
           break;
     } 
   }
  //  1 2 3 4 5 6
  //  9 10 11 6 5 4
  //  6 5 4
   cout << "YES" << endl;
   for(int i = 1; i < n; i++){
     if(v[i] != v[0]){
        cout << 1 << " "<< i+1 << endl;
     }
   }
   for(int i = 1; i < v.size(); i++){
      if(v[i] == v[0] ){
    cout << i + 1 << " "<< temp + 1 << endl;
   }}
   
   
   
  

 
  
  
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