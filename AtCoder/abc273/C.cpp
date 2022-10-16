#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a;
    cin>>n;
    vector<int> A(n,0);
    vector<int> K(n,0);
    
    for(int i=0;i<n;i++) {
        cin>>A[i];
    }
    set<int> setA(A.begin(),A.end());
    int dis=setA.size()-1;
    sort(A.begin(),A.end());
    int a0=A[0];
    for(int i=0;i<A.size();i++){
        if(A[i]==a0) K[dis]++;
        else{
            a0=A[i];
            dis--;
            K[dis]++;
        }
    }
    for(auto i:K) cout<<i<<endl;


    /*
    set<int> setA(A.begin(),A.end());

    vector<int> kk(n,0);
    for(auto ai:setA){
        int k=0;
        
        for(auto j=setA.rbegin();j!=setA.rend()&&*j>ai;j++){
            k++;
        }
        kk[k]++;
    }
    */
    
}
