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
    //  int n;
    //  cin >> n;
    //  for(int i = 0; i < n; i++){
    //     cin >> v[i];
    //  }
    //  for(int i = 0; i < n; i++){
    //     cout << v[i] ;
    //  }
    string s;
    cin >> s;
    string ans = "hello";
    int i = 0, j = 0;
    while(j < s.size()){
         if(i < 5 && s[j] == ans[i]){
            i++;
         }
         j++;
    }
    if(i == ans.size()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
     
}
  -1 -2 5 
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