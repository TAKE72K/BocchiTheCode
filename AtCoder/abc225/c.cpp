#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<ll> > date(n, vector<ll>(m, 0));
    //int r = 0;
    ll I = 0, J = 0, Jstar = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> date[i][j];
            if (i == 0 && j == 0) {
                if(date[i][j]%7==0&&m>1){cout<<"No";return 0;}
                else if(m+date[i][j]%7>8){cout<<"No";return 0;}
            }
            if(i!=0){
                if(date[i][j]-date[i-1][j]!=7){cout<<"No";return 0;}

            }
            if(j!=0){
                if(date[i][j]-date[i][j-1]!=1){cout<<"No";return 0;}
            }


        }


    }
    cout << "Yes";
    return 0;
}