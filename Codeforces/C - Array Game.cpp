#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e20+7;
ll num,m,n,ans,k,x,id,mx;
set<ll>s;

//vector<ll>v,v1,v2;

vector<pair<ll,pair<ll,ll>>>v;

vector<int> v4,v3;
map<tuple<ll,ll,ll>,bool> dp;


void solve(){

    ll n,m;cin>>n>>m;
    ll mn =MOD;
    vector<ll>v;
    v.resize(n);


    for(auto&it:v)
        cin>>it;


    if(m>2){
        cout<<"0"<<endl;return;
    }


    sort(v.begin(),v.end());

    if(m==1){
        mn =v[0];
        for(int i=1;i<n;++i)
            mn= min(mn,abs(v[i]-v[i-1]));

        cout << mn <<endl;return;

    }else{

      mn=v[0];
      for(int i=0;i<n;++i){
         for(int j=i+1;j<n;++j){

            ll num = abs(v[i]-v[j]);

            auto it = lower_bound(v.begin(),v.end(),num);

            if(it==v.end())
                continue;

            int idx=it-v.begin();
            //cout << *it << " : " << num << " --- " << v[i] << " | " << v[j] <<endl;


            mn=min({mn,abs(num-v[idx]),num});

            if(idx!=0)
                mn=min(mn,abs(num-v[idx-1]));
         }

      }



        cout<<mn<<endl;return;
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    cin>>_;
    while(_--)
        solve();

    return 0;
}
