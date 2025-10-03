#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,l=0,ans=0,mn=LLONG_MAX,r=MOD,y;
vector<ll>b,v;


void solve(){

   cin>>n>>y;

   deque<ll>q;

   ll x ;
   while(n--){
        cin>>x;
        q.push_back(x);
   }


    bool bol = false ;

    while(y--){
        if(bol)
            q.pop_back();
        else
            q.pop_front();

        bol=!bol;
    }

    if (bol)
        reverse(q.begin(),q.end());
    

    for(auto it : q){
        cout << it << " " ;
    }







}



int main(){
    SPEED;
    int t=1;

    while (t--)solve();

    return 0;

}
