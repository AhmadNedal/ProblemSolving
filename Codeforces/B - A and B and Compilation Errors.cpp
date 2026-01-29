#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,k,x,id,mx;
set<ll>s;

//vector<ll>v,v1,v2;

vector<pair<ll,pair<ll,ll>>>v;

vector<int> v4,v3;
map<tuple<ll,ll,ll>,bool> dp;


void solve(){

    ll n;cin>>n;



    ll sum=0,sum1=0,sum2=0;

    for(int i=0;i<n;++i){
        cin>>x;
        sum+=x;
    }

    for(int i=0;i<-1+n;++i){
        cin>>x;
        sum1+=x;
    }

    for(int i=0;i<-2+n;++i){
        cin>>x;
        sum2+=x;
    }

    cout << sum-sum1 << endl<<sum1-sum2<<endl;








    /*
    map<ll,int>m,m1,m2;

    for(int i=0;i<n;++i){
        cin>>x;
        m[x]+=1;
    }

    for(int i=0;i<n-1;++i){
        cin>>x;
        m1[x]+=1;
    }

    for(int i=0;i<n-2;++i){
        cin>>x;
        m2[x]+=1;
    }



    for(auto it : m ) {
        if ( m1[it.first] !=it.second){
            cout << it.first<<endl;
            break;
        }
    }


    for(auto it : m1 ) {
        if ( m2[it.first] !=it.second){
            cout << it.first<<endl;
            break;
        }
    }

*/



    /*
    6 2
10 11 12 13 15 22
    int l=0,r=n-1;

    while(m--){
        if(v[l]+v[l+1]<v[r]){
            sum-=v[l++];
            sum-=v[l++];
        }else {
            sum-=v[r--];
        }
    }
    cout << sum <<endl;

    */




}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    //cin>>_;
    while(_--)
        solve();

    return 0;
}
