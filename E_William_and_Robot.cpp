#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> taken(n, false); // marks if index is taken

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Pair of {value, index}, so we can sort by value and keep track of original index
    vector<pair<int, int>> vals;
    for (int i = 0; i < n; ++i) {
        vals.push_back({a[i], i});
    }

    // Sort in descending order of value (for William's optimal picks)
    sort(vals.rbegin(), vals.rend());

    int score = 0;
    int robotIndex = 0;
    int turn = 0; // 0 = William, 1 = Robot
    int i = 0; // pointer over sorted vals

    for (int moves = 0; moves < n; ++moves) {
        if (turn == 0) {
            // William's turn: pick max untaken value
            while (i < n && taken[vals[i].second]) i++;
            if (i < n) {
                taken[vals[i].second] = true;
                score += vals[i].first;
                i++;
            }
        } else {
            // Robot's turn: pick leftmost untaken index
            while (robotIndex < n && taken[robotIndex]) robotIndex++;
            if (robotIndex < n) {
                taken[robotIndex] = true;
                robotIndex++;
            }
        }
        turn ^= 1; // Alternate turns
    }

    cout << score << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
