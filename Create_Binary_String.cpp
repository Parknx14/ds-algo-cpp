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
    // int n;
    // cin >> n;
    
    // int n, m, k;
    // cin >> n >> m >> k;
    // vector<int>v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }
    // for(int j = 0; j < n; j++){
    //     cin >> v[j];
    // }
    int n,a,b,c,d;
    cin >> n >>a >> b >> c>> d;
    int cost1 = n*a;
    int cost2 = n*b;
    int num = n/2;
    int rem = n % 2;
    int temp = max(a, b);
    int temp1 = (num * (num + 1))/2;
    int temp2 = ((num-1) * (num))/2;
    int temp3 = max(num * c + (b), (num*d) +(a)) ;
    int temp4 = max(num * d + (a), (num-1)*c +a );
    int ans1 = (temp1* c)   + (temp2* d) + (num * a) + (num * b);
    int ans2 = (temp1* d)   + (temp2* c) + (num * a) + (num * b);
    if(rem!= 0){
        ans1 += temp3;
        ans2 += temp4;
    }
    cout << max(ans1, max(ans2, max(cost1, cost2))) << endl;
    
    

    

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