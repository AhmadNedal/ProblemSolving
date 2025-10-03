#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

//vector<pair<ll,ll>>v;
vector<vector<int>>seg,arr;
//vector<pair<int,bool>>v;
ll n,x,o,a,N=1e7-1,num,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];
//map <pair <int,int> , ll> m;
//vector<ll>v,v2,primes;

struct trie{
    trie *next[3];
    int count;
    bool isEnd;
    trie(){
        for(int i=0;i<3;++i){
            next[i]=NULL;
        }
        isEnd=false;
    }
};

trie *root;

void add(){
    trie *cur= root;

    for(int i=0;i<s.size();++i){

        if(cur->next[s[i]-'a']  == NULL){
            cur->next[s[i]-'a'] = new trie;
        }
        cur = cur->next[s[i]-'a'];

    }
    cur->isEnd=true;
}




bool rec(trie *cur,int idx, bool bol){
    if(!cur)return false;
    if(idx==s.size()) {
        return cur->isEnd&&bol;
    }


    bool ans =false ;

    if(bol){
        if(cur->next[s[idx]-'a']!=NULL)
            return rec(cur->next[s[idx]-'a'],idx+1,true);

        return false;

    }else {

       for(int i=0;i<3;++i){
            if( cur->next[s[idx]-'a']==NULL)continue;

            if(s[idx]-'a' == i ){
               ans |= rec(cur->next[i], idx + 1, false);
            } else {
                ans |= rec(cur->next[i], idx + 1, true);
            }

            if(ans)return true;
        }


            return ans ;
    }

}






void solve(){
    cin>>n>>s;
    int ans=0;

    for(int i=2;i<s.size();++i)
        if(s[i]=='x'&&s[i-1]=='x'&&s[i-2]=='x')ans+=1;


    cout <<ans<<endl;


 }
int main(){
    SPEED;
    int t=1;//cin>>t;

    while (t--)solve();

    return 0;

}
