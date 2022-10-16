#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,xi,sum;
    cin>>n;
    vector<int> x(n,0);
    int p;
    sum=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
        sum+=x[i];
    }
    p=round((double)sum/n);
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=((x[i]-p)*(x[i]-p));
    }
    cout<<ans;
} 