#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

vector<ll>v,seg,arr,v2;
ll n,x,o,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
//int const N =1e5+10 ;
ll dp[1001];
bool bol = false ;

ll powerMod(ll a, ll b) {
    if (b == 0)
        return 1;

    ll h = powerMod(a, b/2);
    ll res= (h*h)%(bol?MOD:MOD-1);

    if (b%2==1)
        res=(res*a)%(bol?MOD:MOD-1);

    return res;
}







ll start =0 ;




void build(int p , int l , int r ){

    if(l==r){
        seg[p]=arr[l];
        return ;
    }


    int mid = (l+r)/2;

    build(p*2,l,mid);
    build(p*2+1,mid+1,r);

    seg[p]=seg[p*2]+seg[p*2+1];
}


ll getValue(ll p,ll l,ll r , ll a , ll b ) {

    if ( a<=l && r<=b) {
        return seg[p];
    }

    if(r<a || l>b ){
        return 0;
    }


    ll mid = (l+r)/2 ;



    ll res =  getValue(p*2,l,mid,a,b)+getValue(p*2+1,mid+1,r,a,b);


    return res ;


}


void update(int p, int l, int r, int idx, ll val) {
    if (l == r) {
        seg[p] = val;
        return;
    }

    int mid=(l+r)/2;

    if (idx<=mid)
        update(p*2,l,mid,idx,val);
    else
        update(p*2+1,mid+1,r,idx,val);

    seg[p]=seg[p*2]+seg[p*2+1];
}



ll rec ( int idx) {
    if (idx==n){
        return -1;
    }

    if(dp[idx]!=-1){
        return dp[idx];
    }


    bool bol = false ;
    ll res = MOD;
    for (int i=idx ;i<n&&i-idx+1<=k;++i){
        if(i>idx&&s[i-1]==s[i])bol=true;

        if ( bol || idx ==i ){
            res = min (res,1+rec(i+1));
        }
    }

    return dp[idx]=res ;



}



bool isLeap(int y) {
    return (y % 4 == 0) && (y % 100 != 0 || y % 400 == 0);
}




class stackinQueue {

    stack<int>st;
    public:
       void push(int item) {
            st.push(item) ;
       }

       int Peek() {
            stack<int>st2;
            while (!st.empty()) {
                st2.push( st.top()) ;
                st.pop();
            }
            int ans = st2.top();
            while (!st2.empty()) {
                st.push(st2.top()) ;
                st2.pop();
            }

            return ans ;
       }


       void Pop() {
            stack<int>st2;
            while (!st.empty()) {
                st2.push( st.top()) ;
                st.pop();
            }
            st2.pop();
            while (!st2.empty()) {
                st.push( st2.top()) ;
                st2.pop();
            }
       }

   void print() {
        stack<int> temp = st;

        stack<int> reverse;
        while (!temp.empty()) {
            reverse.push(temp.top());
            temp.pop();
        }

        while (!reverse.empty()) {
            cout << reverse.top() << endl;
            reverse.pop();
        }

    }



       bool isempty(){
           return st.empty();
       }

} ;


void solve() {
    cin>>n;

    map<ll,int>m;
    ll num ;
    while(n--){
        cin>>num;
        m[num]+=1;
    }


    v.resize(0);

    for(auto it : m )v.push_back(it.second);

    m.clear();
    sort ( v.rbegin() , v.rend() ) ;
    ll ans =0 ;
    for (auto it : v ){

        while(m[it]&&it>0)it-=1;
        
        ans+= it ;
        m[it]=true ;
    }

    cout << ans <<endl;



}

int main() {
    SPEED;

    int t=1;cin>>t ;

    while (t--)solve();

    return 0;
}
