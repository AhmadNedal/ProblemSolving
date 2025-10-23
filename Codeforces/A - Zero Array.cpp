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
    int q ;
    cin>>n>>q;
    vector<ll>v(n);
    unordered_set<ll>s;
    unordered_map<ll,ll>m;

    for(auto&it:v){
        cin>>it;
        s.insert(it);
        m[it]+=1;
    }

    if(s.count(0))s.erase(0);

    while(q--){
        cin>>x;

        if(x==2){
            cout << s.size()<<endl;
            continue;
        }


        cin>>y>>z;



        ll num = v[y-1];
        m[ num ]-=1;
        v[y-1]=z;

        if(m[num]==0){
            s.erase(num);
        }

        m[z]+=1;
        if(m[z]==1&&z!=0){
            s.insert(z);
        }


    }



}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
