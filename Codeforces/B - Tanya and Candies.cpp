#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,ans;
vector<int>v;


void solve(){

    cin>>n;
    v.resize(n);
    ans=0;
    ll sumOdd=0,sumEven=0,curSumOdd=0,curSumEven=0;

    for(int i=0;i<n;++i){
        cin>>v[i];

        if(i%2==0)
            sumEven+=v[i];
        else
            sumOdd+=v[i];
    }


    for(int i=0;i<n;++i){

        if(i%2==0)
            sumEven-=v[i];
        else
            sumOdd-=v[i];

        if(curSumOdd+sumEven==curSumEven+sumOdd)
            ans+=1;


        if(i%2==0)
            curSumEven+=v[i];
        else
            curSumOdd+=v[i];
    }

    cout <<ans<<endl;




}

int main(){
    int t=1;
    while (t--)
        solve();

    return 0;
}

