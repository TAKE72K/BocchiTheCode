#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int n;
    cin >> n;
    int ans = 0;
    vector<int>s(n + 1, 0);
    vector<int>a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        //if(a[i]<=0) ans++;

        s[i] = s[i - 1] + a[i];
        for (int j = i ; j >= 1; j--) {
            if (s[i] - s[j-1] <= 0)ans++;
        }
    }
    //  for (int i : s) {
    //    cout << i << " ";
    // }
    cout << ans;
    return 0;
}