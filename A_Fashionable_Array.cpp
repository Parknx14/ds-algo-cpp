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

  int ceil_div(int a, int b) {
    return (a + b - 1) / b;
}
 


void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
   
    for(int i = 0; i < n; i++){
        cin >> v[i];
      
    }
    sort(v.begin(), v.end());
    if(v[0] % 2 == 0 && v[n-1] % 2 == 0){
        cout << 0 << endl;
        return;
    }
    if(v[0] % 2 != 0 && v[n-1] % 2 != 0){
        cout << 0 << endl;
        return;
    }
    int cnt = 0;
    int cnt2 = 0;
    if(v[0] % 2  == 0){
      
        for(int i = n - 1; i > 0; i--){
             if(v[i] % 2 == 0){
                break;
             }
             cnt++;
        }
          for(int i = 0; i < n-1; i++){
             if(v[i] % 2 != 0){
                break;
             }
             cnt2++;
        }
        
       
    }
    else{
        for(int i = 0; i < n-1 ; i++){
             if(v[i] % 2 == 0){
                break;
             }
             cnt++;
        }
           for(int i = n-1; i > 0; i--){
             if(v[i] % 2 != 0){
                break;
             }
             cnt2++;
        }
    }
    cout << min(cnt, cnt2) << endl;
  
    

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