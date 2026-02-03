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
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   for(int i = 0; i < n; i++){
    cin>> v[i];
   }
   // priority_queue<int>pq;
  
   int val = 0;
   int idx ;
   int s = 0;
   int cnt =0 ;
   vector<int>vis(n, 0);
   int flag = 0;
   while(val < n ){
        int flag2 = 0;
       for(int j = s; j < n; j++){
             if(v[j] <= val && vis[j] != 1){
                val++;
                vis[j] = 1;
              
                idx = j;
             }
             flag2= 1;
            
       }
       if(flag2 == 1){
        cnt++;
       }
    
   if(val == n){
    break;
   }
      
       for(int j = idx ; j >= 0; j--){
        
             if(v[j] <= val && vis[j] != 1){
                 val++;
               
                s = j;
                vis[j] = 1; 
             }
             flag = 1;
       }
       if(flag == 1){
        cnt++;
       }
     


   }
cout << cnt -1<< endl;
    
  
  
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

