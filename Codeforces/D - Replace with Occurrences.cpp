#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,a,N=1e7-1,num,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<ll>v;


ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}




void solve(){

     cin>>n;
     v.resize(n);
     for(auto&it:v)cin>>it;

     map<int,vector<ll>>m;

     for(int i=0;i<n;i++)
        m[v[i]].push_back(i);

     vector<int> v2(n);
     int num= 1;
     bool bol= true;

     for(auto it:m) {
        int s=it.second.size();

        if(s%it.first!=0) {
            bol=false;
            break;
        }

        for(int i=0;i<s;i+=it.first){

            for(int j=0;j<it.first; j++)
                v2[it.second[i+j]]=num;

            num++;
        }
    }

    if(!bol){
        cout<<-1<<endl;
        return;
    }


    for(int num:v2)
        cout<<num<< " ";
    
    cout<<endl;


}


int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;

}
