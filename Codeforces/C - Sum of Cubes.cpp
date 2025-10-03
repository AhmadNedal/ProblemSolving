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
//vector<pair<int,bool>>v;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;


vector<ll>v;

void SetToPower3(){
    ll N=1e4+10;

    for(ll i=1;i<N;i++)
        v.push_back(i*i*i*1LL);
    
}



void solve(){
    ll h ;
    cin>>n;


    int l=0,r=v.size()-1;

    while(l<=r){
        ll sum = v[l]+v[r];
       // cout << "l = "<< l << "  r= "<<r << "   : " << v[l]<< " , "<< v[r]<<endl;
        if(sum==n){
            cout << "YES"<<endl;
            return;
        }

        if (sum<n)
            l+=1;
        else
            r-=1;
        
    }


    cout <<"NO"<<endl;











}


int main(){
    SPEED;
    int t=1;cin>>t;

    SetToPower3();
    //for(auto it : v) cout << it << " ";

    cout <<endl;

    while (t--)solve();

    return 0;
}
