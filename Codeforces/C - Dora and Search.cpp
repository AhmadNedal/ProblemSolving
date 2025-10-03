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
   v.resize(n);
   priority_queue<int> mx,mn;


   for(auto&it:v){
      cin>>it;
      mn.push(it);
      mx.push(-it);
   }


    int l=0,r=n-1;

    bool bol;


    while(l<r){
        
        bol = true; 
        
            if(v[l]==mn.top()){
                bol = false;
                mn.pop();
                l+=1;
            }else if(v[l]==-mx.top()){
                mx.pop();
                l+=1;
                bol = false;
            }
           

            if(v[r]==mn.top()){
                mn.pop();
                r-=1;
                bol=false;
            }else if(v[r]==-mx.top()){
                mx.pop();
                r-=1;
                bol = false;
            }
                
                
        if (bol)break;
        

    }


    if(r<=l){
        cout <<-1<<endl;
        return;
    }

    cout << ++l << " "<< ++r << endl;
    




}


int main() {
    SPEED;

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
