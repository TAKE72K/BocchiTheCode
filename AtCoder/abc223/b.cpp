#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int m = s.size() - 1, M = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] <= s[m]) {
            m = i;
        }
    }
}