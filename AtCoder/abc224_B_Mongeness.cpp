#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;

    cin >> h >> w;
    vector<vector<int> > s(h, vector<int>(w, 0));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) cin >> s[i][j];
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            for (int k = i + 1; k < h; k++) {
                for (int l = j + 1; l < w; l++) {
                    if (s[i][j] + s[k][l] > s[k][j] + s[i][l]) {cout << "No"; return 0;}
                }
            }
        }
    }

    cout << "Yes";

}