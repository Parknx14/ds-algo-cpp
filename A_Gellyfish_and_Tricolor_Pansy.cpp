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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mini = min(a,b);
    int mini2 = min(c,d);
    int mini3 = min(mini, mini2);
    if(mini3 == b || mini3 == d){
        cout << "Gellyfish" << endl;
        return;
    }
    else{
         cout << "Flower" << endl;
    }

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