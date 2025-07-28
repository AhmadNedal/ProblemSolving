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


bool can(int mid, int i , int j ){


    return (mid+i+j<=x&& (i*j+i*mid+mid*j)<=n );

}




void solve() {



    cin>>n>>a>>b>>c>>d;

    int num = a-c;
    int num2 =b-d;
    cin>>s;
    int idx=1;

    for(auto it:s){
            
         if(num<0&&it=='E')
             num+=1;
         else if(it=='W'&&num>0)
             num-=1;

         if(num2<0&&it=='N')
             num2+=1;
         else if(it=='S'&&num2>0)
             num2-=1;

         if(num==0&&num2==0){
            cout <<idx<<endl;
            return ;
         }

            idx+=1;
    }

    cout <<-1<<endl;










}

int main() {
    SPEED;

    int t=1;

    while (t--)solve();

    return 0;
}
