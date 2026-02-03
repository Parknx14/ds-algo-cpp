/*
    Har Har Mahadev
    author: HIMANSHU_D_OP
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

void himanshuSolve() {
    int rowCount, colCount;
    cin >> rowCount >> colCount;

    vector<pair<int, int>> maxPositions;
    int maxVal = 0;

    for (int row = 0; row < rowCount; ++row) {
        for (int col = 0; col < colCount; ++col) {
            int current;
            cin >> current;

            if (current > maxVal) {
                maxVal = current;
                maxPositions.clear();
                maxPositions.emplace_back(row, col);
            } else if (current == maxVal) {
                maxPositions.emplace_back(row, col);
            }
        }
    }

    unordered_set<int> uniqueRows, uniqueCols;
    for (const auto &p : maxPositions) {
        uniqueRows.insert(p.first);
        uniqueCols.insert(p.second);
    }

    bool possible = false;

    for (auto r : uniqueRows) {
        for (auto c : uniqueCols) {
            bool valid = true;
            for (auto &pos : maxPositions) {
                if (pos.first != r && pos.second != c) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                possible = true;
                goto out;
            }
        }
    }

out:
    cout << (possible ? maxVal - 1 : maxVal) << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        himanshuSolve();
    }
    return 0;
}
