#include "bits/stdc++.h"

using namespace std;
int main() {
    string ans;
    int n, t, q, a, b;
    cin >> n;
    cin >> ans;
    cin >> t;
    vector<int> id1(n),id2(n);
    bool id1F=true;
    for(int i=0;i<2*n;i++){
        id1[i]=i;id2[i]=n+i;
    }
    for (int i = 0; i < t; i++) {
        cin >> q >> a >> b;
        if(q==1){
            int j=(a<n)?id1[a]:id2[a-n];
            int k=(b<n)?id1[b]:id2[b-n];
            
        }else{

        }
        
    }
    cout<<ans;
}