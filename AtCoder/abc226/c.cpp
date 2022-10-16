#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,t,k,a;
    cin>>n;
    vector<vector<ll> > waza(n+1);
    vector<ll> cost(n+1);
    for(int i=0;i<n;i++){
        cin>>cost[i+1]>>k;
        if(k>0){

            for(int j=0;j<k;j++){
                cin>>a;
                waza[i+1].push_back(a);
            }
        }
    }
    vector<set<ll> > dp(n+1);
    for(int i=1;i<n+1;i++){
        dp[i].insert(i);
        for(int j:waza[i]){
            dp[i].insert(dp[j].begin(),dp[j].end());
        }
    }
    ll T=0;
    for(auto i:dp[n]){
        T+=cost[i];
    }
    cout<<T;

    return 0;


}