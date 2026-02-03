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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // for(int i = 0; i < n && k > 0; i++) {
    //     if(a[i] % 2 == 0) {
    //         v[i]++;
    //         k--;
    //     }
    // }

    int ans = 0;
    vector<int>temp;
     for(int i = 0; i < n; i++){
         int curr = v[i];
         for(int j = 0; j < 64; j++){
            
             if((curr & (1LL << j))== 0){
                temp.push_back(j);

             }
             else{
              
                ans++;
             }
         }
     }
    

    sort(temp.begin(), temp.end());
    for(int i = 0; i < temp.size(); i++) {
        if(k - (1LL << temp[i])>= 0) {
            k -= (1LL << temp[i]);
           
            ans++;}
            else{
                break;
            }
    }

    cout << ans << endl;
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
