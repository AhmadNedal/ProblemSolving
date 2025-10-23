#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;




void solve(){
    cin>>n;

    map<int,bool>m;
    int a;

    while(n--){
        cin>>a;
        m[a]=true;
    }

    for(int i=0;i<102;++i)
        if(!m[i]){
            cout<<i<<endl;
            return;
        }


}

int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
