#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    int a, b;
    cin >> n;
    int maxdegree=0;
    vector<int> v(n+1, 0);
    for (int i = 0; i < n - 1; i++) {
        cin >> a;
        cin >> b;
        v[a]++;
        v[b]++;
        maxdegree=max({v[a],v[b],maxdegree});
    }
    if(maxdegree==n-1){cout<<"Yes";}
    else{cout<<"No";}
    return 0;
}