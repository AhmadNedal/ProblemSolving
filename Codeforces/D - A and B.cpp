#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,num,c,d,mx,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<ll>a;
vector<set<int>>v;
const int N = 1e5*2+1;
map<ll,bool>vis;
map<ll,ll>mp;
vector<ll>b;
map<int, vector<int>> g;


ll Calc(char ch,bool bol ){

    if(bol)
        reverse(s.begin(),s.end());

    ll idx=0;
    num=0;
    for(ll i=0;i<s.size();++i)
        if(s[i]==ch){
            num+= i-idx;
            idx+=1;
        }
    

    if(bol)
        reverse(s.begin(),s.end());


    return num;

}

ll Cal2(char ch) {
    bool bol = false;
    num=0;
    ll added=0;

    vector<ll>v2;
    for(ll i=0;i<s.size();++i)
        if(s[i]==ch)
            v2.push_back(i);
    

    if(v2.size()==0)
        return 0 ;


    ll C=v2.size()/2;
    num=0;
    for (ll i=0;i<v2.size();i++) 
        num+=abs(v2[i]-(v2[C]-C+i));

    return num;

}




void solve(){

    cin>>n>>s;

    cout << min({Cal2('b'),Cal2('a'),Calc('a',false),Calc('a',true),Calc('b',false),Calc('b',true )})<<endl;


}

int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
