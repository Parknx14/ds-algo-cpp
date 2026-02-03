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
   int m1 = n * (n-1)/2;
   vector<int>v(m1);
   for(int i = 0; i < m1; i++){
    cin >> v[i];
   }
   sort(v.begin(),v.end(),greater<int>());
   map<int,int>m;
   for(int i = 0; i < v.size(); i++){
     m[v[i]]++;
   }
   vector<int>ans(n);
   ans[0] = v[0] ; 
   int cnt = 0;
   int j = n-1;
   for(auto it : m){
        
        int val = it.second;
        while(val > 0){
             val -= j;
            ans[j] = it.first;
             j--;
        }
   }
   for(auto it : ans){
    cout << it <<  " ";
   }
   cout << endl;
   return;

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