#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,a,N=1e7-1,num,b,c,d,mx,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<string>v;


ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}




void solve(){

    cin>>n>>m;
    v.resize(n);

    for(auto&it:v)cin>>it;

    
    for(int i=n-1;i>-1;--i)
        for(int j=0;j<m;++j){
                
            if(v[i][j]!='*')
                continue;

                
            int k=i;
            k+=1;

            while( k<n && v[k][j]=='.')
                k+=1;

            k-=1;

            char tmp=v[k][j];
            v[k][j]=v[i][j];
            v[i][j]=tmp;

        }



    for(auto it :v)
        cout << it <<endl;
    
    cout <<endl; 
    
}


int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
