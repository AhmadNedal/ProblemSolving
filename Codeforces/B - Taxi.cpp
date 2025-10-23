#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;




void solve(){

    cin>>n;

    int a;
    int arr[5];

    memset(arr,0,sizeof arr);

    while(n--){
        cin>>a;
        arr[a]+=1;
    }

    int ans=0;
    ans+=arr[4]+arr[3]+(arr[2]+1)/2;
    arr[1]-=min(arr[1],arr[3]);

    arr[1]-=arr[2]%2==1?2:0;

    if(arr[1]>0)
        ans+=(arr[1]+3)/4;


    cout << ans <<endl;

}

int main(){
    int t=1;
    while (t--)
        solve();

    return 0;
}
