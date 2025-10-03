#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,N=1e7-1,num,c,d,mx,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<ll>a,b;
vector<set<int>>v;


ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}


int rec ( int idx , set<int> s){
    if (idx ==v.size()) {
        return s.size()==m;
    }

    int res =0;

    res += rec(idx+1,s );
    s.insert(v[idx].begin(),v[idx].end());
    res +=rec( idx+1 ,s);

    return res ;





}




void solve(){
    cin>>n>>m;

    vector< set<int>>v;
    set<int>y,st;
    map<int ,int >mp;

   if ( n==2 ) {
        bool bol =true;
         for (int i=0;i<n; ++i) {
                cin>>x;
           for (int j=0;j<x;++j) {
                    int y;
                    cin>>y;
                    mp[y]++;
                }
                for (int j=1;j<=m;++j){
                    if(mp[j]==0){
                        bol=false;
                    }
                    mp[j]=0;
                }
            }


           cout<<(bol?"YES":"NO")<<endl;

        return;
    }



    int num ;
    for(int i=0;i<n;++i){
        int si=0;
        cin>>si;
        while(si--){
            cin>>num ;
            mp[num]+=1;
            y.insert(num);
        }
        v.push_back(y);
        y.clear();
    }

    if (mp.size()<m){
        cout << "NO"<<endl;
        return ;
    }





    set<int>number;
    for(auto it : mp ) {
        if (it.second<=1)
            number.insert(it.first);

    }


    if(number.size()==0){
        cout << "YES"<<endl;
        return ;
    }

    bool bol = false ;
    num =0 ;
    for (int i=0;i<n;++i) {
        bol = false ;
        for(auto it : v[i]){
            if ( number.count(it)){
                bol=true;
                break;
            }
        }

        if(!bol)
            num+=1;
    }

    cout << (num>1?"YES":"NO")<<endl;


}

/*

5 10

2 6 7 8 9
6 7 8 9

At Least Tow
1 2 3 4 5 6 7 ? 9 10


1 2 3 4
1 2 5 6 7
9 10

3 , 4 , 5 ,10





*/


int main(){
    SPEED;
    int t=1;
    cin>>t;


    while (t--)solve();

    return 0;

}
