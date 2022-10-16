#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> count(26,0);
    for(int i=0;i<s.size();i++){
        int j=s[i]-97;
        count[j]++;
    }
    ll a=1;
    for(int i=s.size();i>0;i--){
        a*=i;
    }
    ll b=1;
    for(int i:count){
        if(i>1){
            for(int j=i;j>0;j--){
                b*=j;
            }
        }
    }
    cout<<a/b;
}