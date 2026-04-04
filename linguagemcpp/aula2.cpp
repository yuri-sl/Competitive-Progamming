#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int ans = 4 * m;

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;

            if (i > 0) {
                ans += 2 * (x + y);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}