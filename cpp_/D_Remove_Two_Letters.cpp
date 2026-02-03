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
   string s;
   cin >> s;
   int cnt= 0;
    set<int>st;
    for(int i=0 ; i < n; i++){
        st.insert(s[i]);
    }
    if(st.size() == 1){
        cout << 1 << endl;
        return;
    }
   for(int i = 0; i < n-2; i++){
     if(s[i] == s[i+2]){
        cnt++;
     }
    //  if(i == n-3){
    //     if(s[i] == s[i+2]){
    //         cnt++;
    //     }
    //  }
   }
   cout << n-1 - cnt << endl;

//    vector<int>v(n);
//    for(int i = 0; i < n; i++){
//     cin >> v[i];
//    }

 

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