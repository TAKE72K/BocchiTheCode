#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,a,b,c;
        bool s1,s2;
        s1=true;s2=true;
        cin>>n;
        cin>>a>>b;
        a=a%2;
        b=b%2;
        for(int j=0;j<n-2;j++){
            cin>>c;
            if(j%2==0){
                if((c%2)!=a) s1=false;
            }else{
                if((c%2)!=b) s2=false;
            }
        }
        if(s1&s2) cout<<"Yes\n";
        else cout<<"No\n";
    }
}

