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
  
   // unordered_map<int,int>m;
   // set<int>s;
  string s;
  cin >> s;
   
   for(int i = 0; i < n; i++){
            if(s[i] == '1'){
               
                if(i > 0 && s[i-1] == '0'){
                    s[i-1] = '*';
                }
                else if(i < n-1 && s[i + 1] == '0'){
                    s[i+1] = '*';
                }
              
                
            }
   }
   for(int i = 0; i < n; i++){
    if(s[i] == '0'){
        cout << "No" << endl;
        return;
    }
   }

  
   cout << "Yes" << endl;
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

