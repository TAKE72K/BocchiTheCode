#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b;
    cin>>a>>b;
    
    if(b<=1) cout<<0;
    else if(b<=a) cout<<1;
    else{
        int c=(b-a)/(a-1);
        if((b-a)%(a-1)) cout<<c+2;
        else cout<<c+1;
    }

} 