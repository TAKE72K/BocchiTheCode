#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int n;

    for(int i=0;i<t;i++){
        cin>>n;
        cout<<"Division ";
        if(n<=1399) cout<<4;
        else if(n<=1599) cout<<3;
        else if(n<=1899) cout<<2;
        else cout<<1;

        cout<<'\n';
    }
}

