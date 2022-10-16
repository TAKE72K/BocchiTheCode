#include <bits/stdc++.h>

using namespace std;

bool diff(string a,string b){
    return !((a==b)||(a[0]!=b[0]&&a[0]!=b[1]&&b[1]!=a[1]&&b[0]!=a[0]));
}

int main(){
    int t,n;
    string str;
    cin>>t;
    cout<<diff("ss","sb");
    cout<<diff("bc","ab");
    cout<<diff("ss","ss");
    
    
    // for(int i=0;i<t;i++){
    //     cin>>n;
    //     cin>>str;
    //     if(n<2) cout<<"NO\n";
    //     else{

    //     }
    // }
}

