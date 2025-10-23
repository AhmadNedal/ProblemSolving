#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
vector<ll>v;



void solve(){

    cin>>n;
    v.resize(n);

    for(int i=0;i<n;++i)
        cout<<(i%2==0?-1:i==n-1?2:3)<< " " ;

}


int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
