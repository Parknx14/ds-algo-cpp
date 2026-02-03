#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXM = 200005;

long long modpow(long long a, long long e) {
    long long res = 1;
    while (e) {
        if (e & 1) res = res * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return res;
}

long long modinv(long long a) {
    return modpow(a, MOD - 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    vector<int> phi(MAXM);
    for (int i = 1; i < MAXM; i++) phi[i] = i;
    for (int i = 2; i < MAXM; i++) {
        if (phi[i] == i) {
            for (int j = i; j < MAXM; j += i) {
                phi[j] -= phi[j] / i;
            }
        }
    }

    while (T--) {
        int M;
        cin >> M;

        long long invM = modinv(M);
        long long ans = 0;
        for (int d = 1; d <= M; d++) {
            long long cnt = M / d;
            long long p = cnt * invM % MOD;
            if (p == 1) continue;
            long long term = p * modinv((1 - p + MOD) % MOD) % MOD;
            ans = (ans + phi[d] * term) % MOD;
        }
        ans = ans * invM % MOD;
        cout << ans << "\n";
    }

    return 0;
}