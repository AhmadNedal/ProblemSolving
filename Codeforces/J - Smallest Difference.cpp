#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
const int NN = 1e3+3;
ll v[NN][NN];
vector<ll>v2;



void solve(){

    cin>>n;
    map<int,int>m;
    while(n--){
        cin>>k;
        m[k]+=1;
    }

    int ans=0;

    for(auto it:m){

        auto it2 = m.find(it.first-1);
        auto it3= m.find(it.first+1);

        if(it2!=m.end())ans= max({it.second+it2->second,ans});

        if(it3!=m.end())
            ans= max({it.second+it3->second,ans});

       ans= max({it.second,ans});

    }

    cout << ans <<endl;



}

int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
