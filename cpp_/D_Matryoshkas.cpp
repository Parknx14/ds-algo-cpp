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
   map<int,int>m;
   for(int i = 0; i < n; i++){
    cin >> v[i];
    m[v[i]]++;
   }
   
   int cnt = 0;
 
   int mini = 0;
   int extra = 0;
   int flag = 0;
   int last = -1;
    for(auto [x,y] : m){
         if(x - last != 1){
            extra = 0;
         }
         mini += max(0LL, y - extra);
         last = x;
         extra = y;

    }
   cout << mini << endl;
   
   

 

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