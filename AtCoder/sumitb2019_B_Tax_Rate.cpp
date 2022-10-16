#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    double nuki=n/1.08;
    int a=nuki;
    a*=1.08;
    int b=nuki+1;
    b*=1.08;
    if(a==n) cout<<(int)nuki;
    else if(b==n) cout<<(int)nuki+1;
    else cout<<":(";
} 