#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, q;
    int a, x, y;
    cin >> n >> q;
    vector<vector<int> > t(n + 1, vector<int>(2, 0));

    for (int i = 0; i < q; i++) {
        cin >> a;
        if (a == 1) {
            cin >> x >> y;
            t[x][0] = y;
            t[y][1] = x;
        }
        if (a == 2) {
            cin >> x >> y;
            t[x][0] = 0;
            t[y][1] = 0;
        }
        if (a == 3) {
            cin >> x;
            if (t[x][1] == 0) { //no front
                int cont=0;
                int tmp = x;
               vector<int> ttt;
                while (true) {
                    cont++;
                    ttt.push_back( tmp);
                    if (t[tmp][0] != 0) {
                        tmp = t[tmp][0];
                    } else {break;}
                }
                cout<<cont<<" ";
                for(auto ii:ttt) cout<<ii<<" " ;
                cout << endl;
            }
            else {
                int head = x;
                int cont=0;
                while (true){
                    head = t[head][1];
                    if(t[head][1] == 0) break;
                }
                int tmp = head;
                 vector<int> ttt;
                while (true) {
                    cont++;
                    ttt.push_back( tmp);
                   // cout << tmp << " ";
                    if (t[tmp][0] != 0) {
                        tmp = t[tmp][0];
                    } else {break;}
                } 
                cout<<cont<<" ";
                for(auto ii:ttt) cout<<ii<<" " ;
                cout << endl;
            }



        }
    }

}