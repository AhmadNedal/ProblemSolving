#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<ll>v,seg,arr,v2;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;



void rec(int num){

    if(num==1){
        cout << num <<endl;
        return ;
    }

    cout << num << " " ;
    rec(num-1);

}




void solve() {

    int arr[3]={};
    for(auto&it:arr)cin>>it ;

    sort(arr,arr+3);

    int ans=0;

    while(arr[0]>0){
        arr[0]-=1;
        arr[2]-=1;
        ans+=1;
        sort(arr,arr+3);
    }

        sort(arr,arr+3);

     while(arr[1]>0 ) {
        arr[1]-=1;
        arr[2]-=1;
        ans+=1;
        sort(arr,arr+3);
    }



      cout<<(arr[2]%2==0?ans:-1)<<endl;

      
}

int main() {
    SPEED;

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
