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
   int n, k;
   cin >> n >> k;
   vector<int>v(n);
   // unordered_map<int,int>m;
   // set<int>s;
   // vector<int>a(n);
   // priority_queue<int>pq;
   if(n == 1){
    cout << 1 << endl;
    return;
   }
   if(k == n){
    for(int i = 0; i < n; i++){
        cout << i +1 <<  " ";
    }
cout << endl;
return;
   }
   int d = n - k;
   int val = d + 1;
   int rem = val + 1;
   int i =0;

 d++;
 int cnt = 0;
   while( val > 0 && i < n){
     v[i] = val;
     val--;
     i++;
     
   }
   val = rem;
   while(i < n ){
    v[i] = val;
    val++;
    i++;
   }
   for(int i = 0; i < n; i++){
    cout << v[i] <<  " ";
   }
   cout << endl;
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
  
    
}

