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



ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}





void solve(){


   cin>>n>>k;
   priority_queue<int>pos,neg;
   int num;
   bool bol =false ;

   while(n--){
      cin>>num;
      if(num==0){
        bol=true;
        continue;
      }
      if(num>0){
        pos.push(-num);
        continue;
      }

      neg.push(-num);

    }


    while(k--){
        if(!neg.empty()){
            pos.push(-neg.top());
            neg.pop();
            continue;
        }

        if(bol)break;

        neg.push(-pos.top());
        pos.pop();

    }

    ll ans=0;

    while(!pos.empty()) {
        ans+=-pos.top();
        pos.pop();
    }


    while(!neg.empty()) {

        ans+=-neg.top();
        neg.pop();
    }

    cout << ans <<endl;


    /*
    4 6
    1 2
    1 4
    1 2
    3 3 // 0
    1 3 // 1
    1 3 //2


    2 => 1,2
    4 =>1
    3 => 1 ,2



    */





}
int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
