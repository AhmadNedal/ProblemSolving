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
     string s;
     cin>>s;

/*
ninetee ninetee ninetee nineteen

*/

     int arr[26];
     memset(arr,0,sizeof arr);

     for(auto it:s)
        arr[it-'a']+=1;


     ll ans =MOD;

     for(int i=0;i<26 ;++i)
        if(i+'a'=='n'||i+'a'=='e'||i+'a'=='t'||i+'a'=='i')
            ans=min(ans,1ll*(arr[i]-((i+'a'=='n')?1:0))/((i+'a'=='n')?2:((i+'a'=='e')?3:1)));


    cout <<ans <<endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
   // cin>>_;
    while(_--)
        solve();

    return 0;
}
