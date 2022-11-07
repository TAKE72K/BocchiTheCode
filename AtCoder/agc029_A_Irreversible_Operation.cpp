#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin>>s;
    long long move=0;
    int strend=0;
    bool wfound=false;
    //vector<int> a(s.size(),0);
    for(int i=s.size()-1;i>=0;i--) {
        if(s[i]=='W' && wfound==false) {
            wfound=true;
            strend=i;
        }
        
        if(s[i]=='B'&&wfound){
            move+=(strend-i);
            strend--;
        }
    }
    cout<<move;
} 