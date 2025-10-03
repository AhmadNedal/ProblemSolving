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
vector<ll>v,a,b;


ll powerMod(ll a, ll b) {
    if (b==0)return 1;
    ll e = powerMod(a,b/2);

    ll res = (e*e)%MOD;

    if (b%2==1)res=(res*a)%MOD;

    return res;
}

vector<int>f;



void build () {

    int len =0;
    f[0]=0;

    for(int i=1;i<n;i++) {
        int idx=f[i-1];

        while(idx>0&&s[i]!=s[idx])
            idx=f[idx-1];

        if(s[i]==s[idx])
            idx++;

        f[i]=idx;
    }

}

void build2(string t){
    for(int i=1;i<n;i++) {
        int idx=f[i-1];

        while(idx>0&&s[i]!=s[idx])
            idx=f[idx-1];

        if(t[i]==s[idx])
            idx++;

        f[i]=idx;
    }


}



bool can(int mid){
    cout << "mid = " << mid <<endl;
    if(mid==0)
        return false;

    t=s.substr(0,mid);

    build2(t);

    for(int i=0;i<s.size();++i){

      //  while (len>0&&s[i]!=t[len])|
      //      len=f[len-1];

      //  if(len==t.size()){
//
//}


    }
}




int rec( int idx, int sum , int sum2) {
    if (idx == n )
        return min(sum,sum2);


    int ans =0;

   /* if(a[idx]==-1&&b[idx]==-1)
        return max(rec(idx+1,sum,sum2-1),rec(idx+1,sum-1,sum2));
    else if(a[idx]==1&&b[idx]==1)
        return max(rec(idx+1,sum,sum2+1),rec(idx+1,sum+1,sum2));
    else*/

    if(a[idx]>b[idx])
        return rec(idx+1,sum+a[idx],sum2);
    else if(b[idx]>a[idx])
        return rec(idx+1,sum,sum2+b[idx]);
    else
        return max(rec(idx+1,sum,sum2+b[idx]),rec(idx+1,sum+a[idx],sum2));
}





void solve(){

    cin>>n;
    a.resize(n);
    b.resize(n);


    for(auto&it:a)
        cin>>it;

    for(auto&it:b)
        cin>>it;


// الحالات اللي ما الها معنى
//اخذ كامل
//متنازعه عليه للواح د
//-1 متنازع عليه

    int Motone=0,Motmin=0;
    int onea=0,oneb=0;

    for(int i=0;i<n;++i){

        if(a[i]==b[i]){

           if(a[i]==-1)
                Motmin+=1;
           else if(a[i]==1)
                Motone+=1;

            continue
            ;

        }

        if(a[i]>b[i]){
            if(a[i]==1)
                onea+=1;
            continue;
        }

        if(a[i]<b[i]){
            if(b[i]==1)
                oneb+=1;
            continue;
        }

    }


    if (Motmin>onea+oneb) {
        Motmin-= onea+oneb;
        onea=0;
        oneb=0;
    }

    while(Motmin>0){
        if(onea>oneb)
            onea-=1;
        else
            oneb-=1;

        Motmin-=1;

    }


    while(Motone>0){

        if(onea<oneb)
            onea+=1;
        else
            oneb+=1;

        Motone-=1;
    }

    cout << min (onea,oneb)<<endl;






    /*

    for(int i=0;i<n;++i){

        if(a[i]==-1&&(b[i]==0||b[i]==1) ){
            sum2+=b[i];
            continue;
        }
        else if(b[i]==-1&&(a[i]==0||a[i]==1) ){
            sum+=a[i];
            continue;
        }
        if(one>one2){

        }
    }
    f.resize(s.size());
    build();
    int arr[s.size()];
    memset(arr ,0,sizeof arr );

    for(int i=0;i<f.size();++i){
        arr [ f[i] ]++;
    }

    int mx =0;

    for(int i=0;i<f.size();++i){
        cout <<"arr[i] = "<<arr[i]<<endl;
        if (arr[i]>1)
            mx=i;
    }

    if (mx==0)
        cout << "Just a legend"<<endl;


    for(int i=0;i<mx;++i)
        cout << s[i];

*/

}


int main(){
    SPEED;
    int t=1;
    cin>>t;

    while (t--)solve();

    return 0;

}
