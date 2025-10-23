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



int dfs(int num , int numcat) {
    int ans =0;
    vis[num]=true;

    bool bol = true ;
    for(auto it:mp[num]){
        if (!vis[it]) {
            bol = false;
            ans += dfs(it,numcat+v[it]);
        }
    }

    if(bol)
        return numcat<=m;

    return ans ;

}



void solve(){

        cin>>n;
        set<ll>s;
        while(n--){
            cin>>x;
            s.insert(x);
        }

        cout <<s.size()<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
