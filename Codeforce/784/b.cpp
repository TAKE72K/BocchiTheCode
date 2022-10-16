#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int n;

    for(int i=0;i<t;i++){
        cin>>n;
        map<int,int> m;
        bool f=false;

        for(int j=0;j<n;j++){
            int k;
            cin>>k;
            if(f) continue;
            if(m.count(k)==0) m[k]=1;
            else {
                m[k]++;

                if(m[k]>2) {
                    cout<<k<<'\n';
                    f=true;
                    
                }

            }
        }
        
        if(!f) cout<<-1<<'\n';
    }
}

