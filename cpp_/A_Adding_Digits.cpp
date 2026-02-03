/*
   This code belongs to parkxiv
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

    
//     vector<int> ans(n);
//     int val = n;
//     for (int i = 0; i < n; i++) {
//         ans[i] = val--;
//     }

//     int s = -1;
//     int target = -1;
//     for (int i = 0; i < n; i++) {
//         if (v[i] != ans[i]) {
//             s = i;
//             target = ans[i];
//             break;
//         }
//     }

    
//     int j = -1;
//     if (target != -1) {
//         for (int i = s; i < n; i++) {
//             if (v[i] == target) {
//                 j = i;
//                 break;
//             }
//         }
//     }

    
//     if (s != -1 && j != -1) {
//         reverse(v.begin() + s, v.begin() + j + 1);
//     }


//     for (int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    // return 0;
    
    int n, b, a;
    cin >> n >> b>> a;
    int nw = n;
    nw *= 10;
    a--;
    int flag = 0;
    int ans = -1;
    for(int i = 0; i <= 9; i++) {
        int num = nw + i;
         if(num % b == 0) {
            ans = num;
            flag = 1;
            break;
         }
    }
    if(!flag) {
        cout << -1 << endl;
    }
    else{
        string res = "";
        for(int i = 0;i < a; i++) {
            res += '0';
        }
        string rans = to_string(ans);
        cout << rans + res  << endl;
    }
}
