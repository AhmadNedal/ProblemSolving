#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x;
string s,t,a ;


void solve(){

    cin>>n>>x;

    v.resize(n);

    for(auto&it:v)cin>>it;


    queue <ll>q;
    set <ll>s;

    for(auto it:v ){
        if (s.count(it))continue;
            
            s.insert(it);
            q.push(it);

            if(q.size()==x+1){
                s.erase(q.front());
                q.pop();
            }
    }

    
    cout <<q.size()<<endl;
 
    v.clear();
    while(!q.empty()) {
        v.push_back(q.front());
        q.pop();
    }

    reverse(v.begin(), v.end());

    for (auto it:v)cout<<it<<" ";



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin >>t ;

    while (t--)solve();

    return 0;
}
