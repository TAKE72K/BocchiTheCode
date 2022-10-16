#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y;
    vector <int> a,b;
    cin>>n;
    a.resize(n);
    b.resize(n);
    x=0;
    y=0;
    for(auto &i:a){
        cin>>i;
    }
    set<int> a_s(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==a[i]) x++;
        else{
            if(a_s.count(b[i])!=0) y++;
        }
    }

    cout<<x<<"\n"<<y;


}
