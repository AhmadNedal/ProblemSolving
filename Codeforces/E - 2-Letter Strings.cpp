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

    cin>>n;

    map<string,int>m;

    ll ans=0;
    string str,s;


    while(n--){
        cin>>str;

        for(char ch='a';ch<1+'k';ch++) {
            if(str[1]==ch)continue;
            string s=str;
            s[1]=ch;
            ans+=m[s];
        }


        for(char ch='a';ch<'k'+1;ch++) {
            if(str[0]==ch)continue;
            string s=str;
            s[0]=ch;
            ans+=m[s];
        }


        m[str]+=1;


    }




    cout<<ans<<endl;


}


int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
