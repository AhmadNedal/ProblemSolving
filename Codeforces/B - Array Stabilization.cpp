#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<vector<int>>seg,arr,v2;
vector<pair<int,bool>>v;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;



void solve() {
    cin>>n;
    vector <int> v(n);
    for(auto&it : v )cin>>it;

    sort(v.begin(),v.end());

    cout << min(v[v.size()-2]-v[0],v[v.size()-1]-v[1]) <<endl;



}


int main(){
    SPEED;
    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
