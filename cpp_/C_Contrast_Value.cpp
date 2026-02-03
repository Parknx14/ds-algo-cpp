#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

   
    vector<int> temp;
    // for (int i = 0; i < n; i++) {
    //     if (i == 0 || v[i] != v[i - 1]) {
    //         temp.push_back(v[i]);
    //     }
    // }
    // v = temp;

   
    // temp.clear();
    // for (int i = 0; i < v.size(); i++) {
    //     if (i == 0 || i == v.size() - 1) {
    //         temp.push_back(v[i]); 
    //     } else {
           
    //         bool isPeak = (v[i] > v[i - 1] && v[i] > v[i + 1]);
    //         bool isValley = (v[i] < v[i - 1] && v[i] < v[i + 1]);
    //         if (isPeak || isValley) {
    //             temp.push_back(v[i]);
    //         }
    //     }
    // }
    // v = temp;
    temp.push_back(v[0]);
    for(int i = 1; i < n; i++){
         if( v[i] != v[i-1]){
            temp.push_back(v[i]);
         }
    }
    
    v = temp;
 for(int i = 1; i < v.size()-1; i++){
    bool p = (v[i] > v[i - 1] && v[i] > v[i + 1]);
            bool val = (v[i] < v[i - 1] && v[i] < v[i + 1]);
            if (p || val) {
                temp.push_back(v[i]);
            }
            else{
                
            }
 }

    cout << v.size() << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}