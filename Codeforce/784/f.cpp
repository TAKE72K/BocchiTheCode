#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    string str;
    cin>>t;

    
    
    for(int i=0;i<t;i++){
        cin>>n;
        long long w=0;
        map<int,int> ali;
        vector<int> candy(n,0),alice(n+1,0),bob(n+1,0);
        for(int j=0;j<n;j++){
            cin>>candy[j];
            w+=candy[j];
            alice[j+1]=candy[j]+alice[j];
            //bob[j+1]=bob[j]-candy[j];
            ali[alice[j+1]]=j+1;
        }
        //int max=0;
        int ans=0;
        
        for(int j=1;j<=n;j++){
            bob[j]=bob[j-1]+candy[n-j];
            if(ali.count(bob[j])) 
            {
                if(j+ali[bob[j]]<=n)
                ans=max(ans,ali[bob[j]]+j);
            }
        }
        cout<<ans<<'\n';
    }
}

