/*

   This code belongs to HalfbloodPrince
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
    vector<int>v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int>ans(n);
    ans[0] = v[n -1];
    int p = n - 3;
    ans[n - 1] = v[n - 2];
    if(n > 2) {
         int i  = 1;
         int j= n-2;
         while(j >= i && p >= 0) {
            if(p >= 0) {
              ans[i++] = v[p--];}
              if(p >= 0){
              ans[j--] = v[p--];}
             
         } 
        }
    for(auto it : ans) {
        cout << it  << " ";
    }
    cout << endl;
    }


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//   int t;
//   cin >> t;
//   while (t--) {
//     solve();
//   }
solve();
}



int n = nums.size();
        int mini = INT_MAX;
        int p = 0;
        long long curr = 0;
        unordered_map<int, int> cnt;
         set<int>s;
        for (int i = 0; i < n; i++) {
            s,insert(nums[i]);
            if (cnt[nums[i]] == 0) {
                curr += nums[i];
            }
            cnt[nums[i]]++;

            while (curr >= k) {
                mini = min(mini, i - p + 1);
                
                cnt[nums[p]]--;
                if (cnt[nums[p]] == 0) {
                    curr -= nums[p];
                }
                p++;
            }
        }

        return (mini == INT_MAX) ? -1 : mini;





        vector<long long> v(n, 2 * 1e18);
         vector<int>ms;
        v[0] = 0;
        for (auto x : r) {
            ms.insert(x);
            v[x[0]] = min(v[x[0]], (long long)x[1]);
        }

     
        for (int i = 0; i < n - 1; ++i) {
            
            v[i + 1] = min(v[i + 1], v[i] + diff[i]);
        }
        // for(int j = 0; j < ms.size();j++) {
        
        // }

        for (int i = n - 2; i >= 0; --i) {
            v[i] = min(v[i], v[i + 1] + diff[i]);
        }

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            ans = max(ans, v[i]);
        }

        return (int)ans;