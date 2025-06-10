#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}

ll n,m;
vector <ll>v;
ll maxnum=0,maxit =0 ;

ll rec (ll index,ll last){


    if(index==n){
        return 0 ;
    }


    ll res1=0,res2=0,res3=0;

    if (v[index]-1==last){
        return res1=rec(index+1,last)+1 ;
    }


    res2 = rec(index+1,last) ;
    res3 = rec(index+1, v[index]) ;




}



void solve() {


    ll n,q; cin>>n>>q;
    ll l,r;

    string str ,str2;cin>>str>>str2;
    vector<vector<int>>v(n+1,vector<int>(26));
    vector<vector<int>>v2(n+1,vector<int>(26));
    vector<int>frq(26);
    vector<int>frq2(26);

    for (int i=0;i<str.size();++i) {
        frq[str[i]-'a']++;
        v[i+1]=frq;
    }

    fill(frq.begin(), frq.end(), 0);

    for (int i=0;i<str2.size();++i) {
        frq[str2[i]-'a']++;
        v2[i+1]=frq;
    }



   vector<int>a(26);
   vector<int>b(26);
   int counter=0,ans=0;

   while(q--){

        cin>>l>>r;
        counter =0;
        frq2 = v[r];
        frq = v[l-1];

        for(int i=0;i<26;++i){
            a[i]=frq2[i]-frq[i];
        }

        frq2 = v2[r];
        frq = v2[l-1];
        
        for(int i=0;i<26;++i){
            b[i]=frq2[i]-frq[i];
        }


        for(int i=0;i<26;++i){
            counter+=abs(a[i]-b[i]);
        }

        cout <<counter/2<<endl;
   }









}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
