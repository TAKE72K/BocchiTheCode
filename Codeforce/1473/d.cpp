#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int t, n, m, l, r;
    cin >> t;
    for (int q = 0; q < t; q++) {
        cin >> n >> m;
        string s;
        cin >> s;
        // vector<int> p(n + 2, 0), m(n + 2, 0);
        vector<int> a(n + 1, 0); //0 init state
        vector<int> dpmax(n + 1, 0), dpmin(n + 1, 0);
        for (int i = 0; i < n; i++) {
            // p[i + 1] = p[i];
            //m[i + 1] = m[i];
            if (s[i] == '-') {
                // m[i + 1]++;
                a[i + 1] = a[i] - 1;

            } else {
                // p[i + 1]++;
                a[i + 1] = a[i] + 1;

            }
        }
        int tmp = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '+') {
                tmp++;
                dpmax[i] = max(dpmax[i + 1], tmp);
            }
            if (s[i] == '-') {
                tmp--;
                dpmin[i] = min(dpmin[i + 1], tmp);
            }
        }
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &l, &r);
            int j = a[r] - a[l - 1];
            if (j > 0) {
                int k = dpmax[l-1] - j;
                printf("%d\n", k - dpmin[l-1] + 1);
            }
            if (j < 0) {
                int k = dpmin[l-1] + j;
                printf("%d\n", dpmax[l-1] - k + 1);
            }
            if (j == 0) {
                printf("%d\n", dpmax[0] - dpmin[0] + 1);
            }
        }

    }
}