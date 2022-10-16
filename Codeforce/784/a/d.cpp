#include <bits/stdc++.h>

using namespace std;



int main(){
    int t,n;
    string str;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n;
        cin>>str;
        if(n<2) {
            if(str=="W")cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(n==2){
            if(str=="RB"||str=="BR"||str=="WW") cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            vector<vector<int> > dp(3,vector<int>(n+1,0));
            //vector<int>dp2(n,0);
            for(int j=0;j<n;j++){
                
                    if(str[j]=='B'){
                        dp[1][j+1]=dp[1][j]+1;
                        dp[2][j+1]=dp[2][j];
                    }
                    if(str[j]=='R'){
                        dp[2][j+1]=dp[2][j]+1;
                        dp[1][j+1]=dp[1][j];
                    }
                    if(str[j]=='W'){
                        dp[0][j+1]++;
                    }
            }

            if(str[1]=='W'&&str[0]!='W') {
                cout<<"NO\n";
                continue;
            }
            if(str[n-2]=='W'&&str[n-1]!='W') {
                cout<<"NO\n";
                continue;
            }
            bool y=true;
            for(int j=1;j<n-1;j++){
                if(str[j]!='W'){
                    if(str[j-1]=='W'&&str[j+1]=='W'){
                        cout<<"NO\n";y=false;break;
                    }
                    if(str[j+1]=='W'){
                        if(str[j]=='R'){
                            if(dp[1][j+1]==0){ cout<<"NO\n";y=false;break; }
                        }
                        if(str[j]=='B'){
                            if(dp[2][j+1]==0){cout<<"NO\n"; y=false;break;}
                        }
                    }

                }
            }  if(y) cout<<"YES\n";
        }

        // if(n<2) cout<<"NO\n";
        // else{
        //     vector<int,int> dp(3,vector<int>(n+1,0));
        //     vector<int>dp2(n,0);
        //     for(int j=0;j<n;j++){
        //         if(str[j]!='W'){
        //             if(str[j]=='B'){
        //                 if(dp[0][j]==0) dp[1][j+1]=dp[1][j]+1;
        //                 else dp[1][j+1]++;
        //             }
        //             if(str[j]=='R'){
        //                 if(dp[0][j]==0) dp[2][j+1]=dp[2][j]+1;
        //                 else dp[2][j+1]++;
        //             }
        //         }
        //         else{
        //             if(dp[0][j]==0) dp[0][j+1]++;
        //             else dp[0][j+1]=dp[0][j]+1;
        //         }
        //     }

        //     for(int j=1;j<=n;j++){

        //     }
        // }//elsae end

    }
}

