#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, l;
    long long a;
    cin >> t;
    set<string> b;
    for (int i = 0; i < t; i++) {
        cin >> l;
        string s = "";
        for (int j = 0; j < l; j++) {
            cin >> a;
            s += to_string(a);
            s+=',';
        }
        b.insert(s);
    }
    cout<<b.size();

}