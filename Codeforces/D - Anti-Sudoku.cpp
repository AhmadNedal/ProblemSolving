#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,num,c,d,mx,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<ll>a;
vector<set<int>>v;
const int N = 1e5*2+1;
map<ll,bool>vis;
map<ll,ll>mp;
vector<ll>b;
map<int, vector<int>> g;


void solve(){

   vector<string>v;

   for(int i=0;i<9;++i){
        cin>>s;
        v.push_back(s);
   }


vector<pair<int,int>> v2 = {
    {0,0}, {3,1}, {6,2},
    {1,3}, {4,4}, {7,5},
    {2,6}, {5,7}, {8,8}
};

   
    for(auto it : v2 )
        if(v[it.first][it.second]=='1')
            v[it.first][it.second]='2';
        else
            v[it.first][it.second]='1';
    

    for(auto it : v)
        cout<< it<<endl;
    


/*
154873296
386592714
729641835
863725149

9753 1 4628

412968357
631457982
598236471
247189563
Output
254873296
386192714
729641135

813715149

9753 1 4628

412968317
632451982
598236471
247189561
*/

}


int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}