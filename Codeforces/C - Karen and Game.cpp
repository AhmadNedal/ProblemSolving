#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<vector<int>>seg,arr,v2;
vector<pair<int,bool>>v;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;


void Row(){

  for(int i=0;i<n;++i){

     int num= MOD;
     for(int j=0;j<m;++j)
         num = min(num,arr[i][j]);

     for(int j=0;j<m;++j)
         arr[i][j]-=num;

     while(num--)
         v.push_back({i,false});

   }
}


void Col(){

    for(int j=0;j<m;++j){

        int num= MOD;
        for(int i=0;i<n;++i)
            num = min(num,arr[i][j]);

        for(int i=0;i<n;++i)
            arr[i][j]-=num;

        while(num--)
           v.push_back({j,true});

     }
}



void solve() {

   cin>>n>>m;
   arr.clear();
   arr.resize(n);
   v.clear();


   for(int i=0;i<n;++i) {
        for(int j=0;j<m;++j){
            cin >>x;
            arr[i].push_back(x);
        }
   }


    if(m>n){

       Row();
       Col();

    }else {

       Col();
       Row();

    }



   for (int i=0;i<n;++i) {
       for (int j=0;j<m;++j) {
          if(arr[i][j]>0){
            cout << "-1"<<endl;
            return;
          }
       }
   }


    cout<<v.size()<<endl;

    for(int i=0;i<v.size();++i) {
        cout<<(v[i].second?"col ":"row ");
        cout<<++v[i].first<<endl;

    }



}


int main(){
    SPEED;

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
