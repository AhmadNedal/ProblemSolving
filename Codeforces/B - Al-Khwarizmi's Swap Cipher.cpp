#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<int>v,seg,arr,v2;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;





void solve() {

    cin>>n;
    map<ll,ll>m;
    set<ll>s;
    
    while(n--){
        cin>>x;
        m[x]+=1;
        s.insert(x);
    }


    vector<ll>v;
    ll sum =0 ;
    for (auto it: m)
        v.push_back(it.second);
    

    sort(v.rbegin(),v.rend());

    ll idx=0 ;
    for (auto it : s ){
        sum += v[idx]*it;
        idx+=1;
    }

    cout << sum <<endl;

}


int main() {
    SPEED;

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
