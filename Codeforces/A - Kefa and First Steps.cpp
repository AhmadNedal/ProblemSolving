#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;




void solve(){

    cin>>n;
    vector<int>v(n);

    for(auto&it:v)
        cin>>it;

    int ans=1,counter=1;

    for(int i=1;i<n;++i) {
        if(v[i]>=v[i-1])
            counter+=1;
        else
            counter=1;


        ans=max(ans,counter);
    }

    cout<<ans<<endl;


}

int main(){
    int t=1;
    //cin>>t;
    while (t--)
        solve();

    return 0;
}
