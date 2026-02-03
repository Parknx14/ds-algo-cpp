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





int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i =0; i < n; i++){
        cin >> v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    if(sum % (n+1) == 0){
     if(n >= 4){
        cout << 5 << endl;
     }
     else{
        cout << 2 << endl;
     }
    }

    else{
    int rem = sum % (n+1);
        if((n+1) - rem >= 5){
            cout << 5 << endl;
        }
        else{
            cout << n << endl;
        }

    }
}