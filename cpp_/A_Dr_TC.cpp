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
   int cnt = 0;
   string t;
   
   for(int i = 0; i < n; i++){
    t = s;
    if(s[i] == '1'){

    t[i] = '0';
    }
    else{
        t[i] = '1';
    }
    for(int j = 0; j < n; j++){
            if(t[j] == '1'){
                cnt++;
            }
    }
   }
   cout << cnt << endl;

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