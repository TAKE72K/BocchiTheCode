#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,a,b,c;
    cin>>s>>a>>b>>c;

    int d=a+b+c;
    int f=s%d;

    if(f<a) 
    {
        cout<<"F";
        return 0;
    }
    else f-=a;

    if(f<b) {
        cout<<"M";
        return 0;
    }
    else f-=b;

    cout<<"T";

    return 0;
}
