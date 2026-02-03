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
   // priority_queue<int>pq;
  

    
  
  
  }



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    string s;
    cin >> s;
    int i = 0;
    string ans = "";
    int flag = 0;
    while(i < s.size()){
        string t = s.substr(i, 3);
        if(t == "WUB"){
            i += 3;
            if(flag == 1){
                ans += " ";
                flag= 0;
            }
            
        }
        else {
            
            ans += s[i];
            flag = 1;
            i++;
        }
    }
    cout << ans << endl;
  
    
}

