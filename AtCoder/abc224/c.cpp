#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<ll> >p(n, vector<ll>(2, 0));
    for (int i = 0; i < n; i++) {
        cin >> p[i][0] >> p[i][1];
    }
    ll tri = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                long double a, b, c;
                bool cc = false;
                if (p[i][0] - p[j][0] != 0ll) {
                    a = (p[i][1] - p[j][1]) / (long double)(p[i][0] - p[j][0]);
                } else {
                    cc = true;
                }
                if (p[i][0] - p[k][0] != 0ll) {
                    b = (p[i][1] - p[k][1]) / (long double)(p[i][0] - p[k][0]);
                } else {
                    if (cc) {
                        continue;
                    }
                    if (!cc) {
                        tri++;  continue;
                    }
                }
                if (cc) {
                    tri++; //cout << i << j << k << endl;
                    continue;
                } else if (a != b) {
                    tri++; //cout << i << j << k << endl;
                }

            }
        }
    }
    cout << tri;
}