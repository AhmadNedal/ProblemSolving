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
    vector<int>v;
    v.resize(n);
    bool a[2]={0};

    for(int i=0;i<n;++i){
        cin>>v[i];

        a[ v[i]%2 ]=1;

    }

    if(a[0]&&a[1])
        sort(v.begin(),v.end());


    for(auto it : v)
        cout << it << " ";

    cout <<endl;

}


int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
