#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int x, y;
    cin >> n;
    vector<pair<int, int> >pos(n);
    set<pair<int, int> >spell;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        pos[i] = make_pair(x, y);
    }
    sort(pos.begin(), pos.end());
    cout << pos.size();
    for (int i = 1; i < n; i++) {
        spell.insert(make_pair(pos[i].first - pos[i - 1].first, pos[i].second - pos[i - 1].second));
        spell.insert(make_pair(-pos[i].first + pos[i - 1].first, -pos[i].second + pos[i - 1].second));

    }
    cout << spell.size();
}