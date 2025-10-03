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
vector<int>v;


ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}


void solve(){

   cin>>s;
   int num=0;

   for(int i=3;i<s.size();++i)
        if(s[i]=='0'&&s[i-1]=='0'&&s[i-2]=='1'&&s[i-3]=='1')
            num+=1;
   

   cin>>n;
   int l;
   char ch;

   while(n--){
        
        cin>>l>>ch;

        l--;

        for(int i=max(3,l);i<min((int)s.size(),l+4);++i)
            if(s[i]=='0'&&s[i-1]=='0'&&s[i-2]=='1'&&s[i-3]=='1')
                num-=1;
                
                
        swap(ch,s[l]);
        

        for(int i=max(3,l);i<min((int)s.size(),l+4);++i)
            if(s[i]=='0'&&s[i-1]=='0'&&s[i-2]=='1'&&s[i-3]=='1')
                num+=1;
                

        cout << (num>0?"YES":"NO")<<endl;


   }


}


int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;

}
