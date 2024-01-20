#include<bits/stdc++.h>
using namespace std;
#define int long long

main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    ///to find out all combination
    ///like n=3...3type ar 0-7 8ta number ase
    ///protiti number iterate kora
    for (int mask = 0; mask < (1 << n); mask++) {
        int mn = 1000000000000, mx = 0, diff = 0, c = 0;
        ///oi num ar protiti bit check out kora
        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                diff += a[i];
                mx = max(mx, a[i]);
                mn = min(mn, a[i]);
                c++;
            }
        }
        if (diff >= l && diff <= r && (mx - mn) >= x && c >= 2) {
            ans++;
        }
    }
    cout << ans << endl;

    delete[] a; // Release dynamically allocated memory
    return 0;
}
