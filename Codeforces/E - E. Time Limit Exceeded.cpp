#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,ans;
vector<int>v;



void solve(){

    cin>>n;
    v.resize(n);
    for(int&num:v)cin>>num;


    sort(v.begin(),v.end());

    ans=0;

    for(int i=0;i<n;++i){
            
        auto it=lower_bound(v.begin()+i+1,v.end(),v[i]+32);
        ans+=(it-(v.begin()+i+1));

    }


    cout <<ans<<endl;


}

int main(){
    int t=1;cin>>t;

    while (t--)
        solve();

    return 0;
}

