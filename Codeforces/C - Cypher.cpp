#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

  cin>>n;
  int arr[n];


  for(auto&it:arr)
        cin>>it;

  ll x,c;
  string s;

  for(int i=0;i<n;++i){
    cin>>x>>s;

    for(int j=0;j<s.size();++j)
        if(s[j]=='D')
            if(arr[i]==9)
                arr[i]=0;
            else
                arr[i]+=1;

        else
            if (arr[i]==0)
                arr[i]=9;
            else
                arr[i]-=1;


  }


  for(auto it :arr)
    cout << it << " ";

    cout <<endl;

}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
