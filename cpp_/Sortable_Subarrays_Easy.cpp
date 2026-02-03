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




void solve() {
    int n;
    cin >> n;
    
    // int n, m, k;
    // cin >> n >> m >> k;
    vector<int>v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }
    for(int j = 0; j < n; j++){
        cin >> v[j];
    }
    int temp = 3;
    int ans = 1;
    v[0] = 0;
    for(int i = 1; i < n; i++){
         if(v[i] >= temp){
            v[i] = ans;
            ans++;
            temp += 2;
         }
         else{
            if(v[i] <= ans){
                ans++;
                continue;
                
            }
            else{
         v[i] = 0;
         ans = 1;
         temp = 3;}
         }
    } 
 int count = 0, cnt = 0;
 int s = 0;
 for(int  i = 1; i < n; i++){
      cnt = 1;
     while( i < n && v[i] > v[i-1]){
            cnt++;
            i++;
     }
     count += (cnt* (cnt+1)/2);
 }
 cout << count << endl;
    

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