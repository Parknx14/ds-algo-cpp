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
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i<n; i++){
        cin >> v[i];
        if(v[i] == 1){
            cnt1++;
        }
    if(v[i] == 2){
            cnt2++;
        }
    }
    int total = cnt1 + cnt2;
    int rem = abs(total - n);
    if(cnt1 == cnt2){
         if( rem % 2 == 0){
        cout << "YES" << endl;}
        else{
            cout << "NO" << endl;
        }
        return;
    }
    a
        int r = abs(cnt1 - cnt2);
        if(r > rem){
            cout << "NO" << endl;
            return;
        }
        if(rem == r){
            cout << "YES" << endl;
            return;
        }
        

        if((rem - r) % 2 == 0){
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
            return;
        }

    
   
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