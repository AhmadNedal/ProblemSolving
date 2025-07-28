#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<ll>v,seg,arr,v2;
ll n,x,o,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;


bool can(int mid, int i , int j ){


    return (mid+i+j<=x&& (i*j+i*mid+mid*j)<=n );

}




void solve() {

   cin>>n>>k;
   queue<pair <ll,pair<vector<int>,vector<int>>>>q;
   vector<int> v ;
   v.clear();
   q.push({n,{v,v}});
   auto ans = q.front();
   int t =1 ;

  ll num;
  int mx =1;

  while(!q.empty()){

    ans =q.front();
    num = ans.first;
    q.pop();

    if(num==k)break;


    if(num<MOD){
        v=ans.second.second;

        mx=0;

        if(v.size()>0)mx=v[v.size()-1];
        if(ans.second.first.size()>0)mx=max(mx,ans.second.first[ans.second.first.size()-1]);

        v.push_back(mx+1);
        q.push({num*10+1, { ans.second.first,v}} );
        v=ans.second.first;
        v.push_back(mx+1);
        q.push({num*2, {v,ans.second.second}} );
        continue;
    }
}


    if(ans.first!= k){
        cout << "NO"<<endl;
        return ;
    }

    cout<<"YES"<<endl;

    cout<<ans.second.first.size()+ans.second.second.size()+1<<endl;

    cout<<n<<" " ;

    int j=1;
    int l=ans.second.first.size() + ans.second.second.size();

    for (int i=0;i<l;++i) {
        if (!ans.second.second.empty()&&ans.second.second[0]==j){
            n=(n*10)+1;
            ans.second.second.erase(ans.second.second.begin());
        } else if(!ans.second.first.empty() && ans.second.first[0] == j) {
            n*=2;
            ans.second.first.erase(ans.second.first.begin());
        }

        cout<<n<<" ";
        j+=1;
    }





}

int main() {
    SPEED;

    int t=1;

    while (t--)solve();

    return 0;
}
