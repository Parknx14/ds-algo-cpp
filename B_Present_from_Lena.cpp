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

    int num = n + 1;
    int mul = 2;

    for(int i = 1; i <= n*2 + 1; i++){

        for(int j  = 0; j < abs(num - i); j++){
            cout << "  ";
        }

        int var;
        if(i <= num){
            var = i;
        } else {
            var = i - mul;
            mul += 2;
        }
int k = 0;
for(; k < var; k++){
    cout << k;
    if(i > 1 && i < n*2 + 1){
 cout << " ";
    }

}

k -= 2;
for(; k >= 0; k--){
    cout << k;
    if(k > 0) cout << " ";
}

  
       
        cout << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}