
#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    int k;
    cin>>x>>k;
    vector<int> digit(x.size()+1,0);
    for(int i=0;i<x.size();i++){
        digit[i+1]=x[i]-'0';
    }
    //debug
    /*
    cout<<"digit: ";
    for(auto i:digit) cout<<i<<" ";
    cout<<endl; 
    */
    if(x.size()<k) cout<<0;
    else{   
        for(int i=0;i<k;i++){
            if(digit[x.size()-i]>=5){
                if(digit[x.size()-i-1]<9){
                    digit[x.size()-i-1]++;
                }else{
                    digit[x.size()-i-1]++;
                    for(int j=x.size()-i-1;j>=1;j--){
                        if(digit[j]>=10){
                            digit[j]=0;
                            digit[j-1]++;
                        }else{
                            break;
                        }
                    }
                }
            }
            digit[x.size()-i]=0;
        }   
        bool nozero=false;
        for(int i=0;i<digit.size();i++){
            if(nozero) cout<<digit[i];
            else{
                if(digit[i]!=0) {
                    nozero=true;
                    cout<<digit[i];
                }
            }
        }
        if(!nozero) cout<<0;
    }
    
}
