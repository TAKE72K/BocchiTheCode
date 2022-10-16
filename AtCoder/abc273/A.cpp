
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,ans;
    cin>>k;
    ans=1;
    for(int i=1;i<=k;i++){
        ans*=i;
    }
    cout <<ans;
}
