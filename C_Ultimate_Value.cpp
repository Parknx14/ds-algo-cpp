#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int64 INF64 = (int64)4e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--){
        int n; cin >> n;
        vector<int64>a(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];

        int64 S0 = 0;
        for(int i=1;i<=n;i++){
            if(i % 2 == 1) S0 += a[i];
            else S0 -= a[i];
        }

        int64 best = 0;
      
        int64 min_odd_expr = INF64;  
        int64 min_even_expr = INF64; 

        for(int j=1;j<=n;j++){
            if(j % 2 == 0){
             
                if(min_odd_expr != INF64){
                    best = max(best, (j + 2*a[j]) - min_odd_expr);
                }
            } else {
              
                if(min_even_expr != INF64){
                    best = max(best, (j - 2*a[j]) - min_even_expr);
                }
            }


            if(j % 2 == 1){
                min_odd_expr = min(min_odd_expr, j + 2*a[j]);
            } else {
                min_even_expr = min(min_even_expr, j - 2*a[j]);
            }
        }

       
        int first_odd = -1, last_odd = -1, first_even = -1, last_even = -1;
        for(int i=1;i<=n;i++){
            if(i % 2 == 1){
                if(first_odd == -1) first_odd = i;
                last_odd = i;
            } else {
                if(first_even == -1) first_even = i;
                last_even = i;
            }
        }
        if(first_odd != -1 && last_odd != -1) best = max(best, (int64)(last_odd - first_odd));
        if(first_even != -1 && last_even != -1) best = max(best, (int64)(last_even - first_even));

        int64 ans = max(S0, S0 + best);
        cout << ans << "\n";
    }
    return 0;
}
