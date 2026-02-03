#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> v(n);
    for (auto &x : v) cin >> x;

    // Coordinate compression
    vector<long long> comp = v;
    sort(comp.begin(), comp.end());
    comp.erase(unique(comp.begin(), comp.end()), comp.end());

    vector<int> freq(comp.size(), 0);

    int i = 0;
    long long ans = 0;

    for (int j = 0; j < n; j++) {
        int id = lower_bound(comp.begin(), comp.end(), v[j]) - comp.begin();
        freq[id]++;

        while (freq[id] > 1) {
            int id2 = lower_bound(comp.begin(), comp.end(), v[i]) - comp.begin();
            freq[id2]--;
            i++;
        }
        ans += (j - i + 1);
    }

    cout << ans << "\n";
}
