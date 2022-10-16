#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,a,b;
    string s;
    cin>>n>>a>>b>>s;
    int all=a+b;
    int cur=0;
    int ov=0;
    for(auto c:s){
        if(c=='a'){
            if(cur<all){
                cout<<"Yes\n";
                cur++;
            }
            else cout<<"No\n";
        }
        else if(c=='b'){
            if(cur<all&&ov<b){
                cout<<"Yes\n";
                cur++;
                ov++;
            }
            else cout<<"No\n";
        }
        else cout<<"No\n";
    }
} 