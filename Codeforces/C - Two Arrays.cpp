#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;


void solve(){

    cin>>n;
    vector<int>a,b;
    a.resize(n);
    b.resize(n);
    map<int,int>ma,mb;

    for(auto&it:a)
        cin>>it;

    for(auto&it:b)
        cin>>it;


    sort(a.begin(),a.end());
    sort(b.begin(),b.end());


    for(int i=0;i<n;++i){
        if(a[i]==b[i] || a[i] == b[i]-1 )
            continue;

        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;


}


int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
