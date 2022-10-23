/*
用list找環的思路去寫，但忽略掉到終點之後還有環的可能，所以WA兩次，後來用一個終點flag解決。
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    vector<int> fn_i(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>fn_i[i];
    }

    int fast,slow;
    slow=1;
    fast=1;
    int time=0;
    bool fast_2=false;
    while(fn_i[slow]!=2){
        if(fn_i[fast]==2||fn_i[fn_i[fast]]==2) fast_2=true;
        slow=fn_i[slow];
        fast=fn_i[fn_i[fast]];
        time++;
        if(fast==slow&&fast_2==false) {
            cout<<-1;
            return 0;
        }
    }
    cout<<++time;
} 
*/

/*
邊走邊改值不就好了
*/
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    vector<int> fn_i(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>fn_i[i];
    }

    int slow=1;
    int time=0;
    while(slow!=2){
        if(slow==-1){
            cout<<-1;
            return 0;
        }
        int tmp=fn_i[slow];
        fn_i[slow]=-1;
        slow=tmp;
        time++;
    }
    cout<<time;
} 