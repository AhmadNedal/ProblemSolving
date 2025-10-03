#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;

ll const MOD =1e9+7;
ll n,x,o,a,N=1e7-1,num,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<pair<ll,ll>>v;


void solve(){

    cin>>s;
    int l=0,r=0,ans=1e6+1;
    int arr[3];
    memset(arr,0,sizeof arr);

    for(int i=0;i<s.size();){

        while(i<s.size()&&(arr[0]<1||arr[1]<1||arr[2]<1)){
            arr[ s[i]-'0'-1 ]+=1;
            i+=1;
        }

        while((arr[0]>0&&arr[1]>0&&arr[2]>0)){
            ans = min(ans,i-l);
            arr[ s[l]-'0'-1 ]-=1;
            l+=1;
        }
    }


    cout <<(ans==1e6+1?0:ans)<<endl;



}


int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;

}
