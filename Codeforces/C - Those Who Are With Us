#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x,o,a,m,b,y;
string s,t;



void solve(){

    // cout << fixed  << setprecision(20) <<d<<endl;


    cin>>n>>m;
    int arr[n][m];
    int mx=0,idx2=0,idx=0;

    for(int i=0;i<n;++i) {
        for(int j=0;j<m;++j) {
            cin>>arr[i][j];
            mx=max(mx,arr[i][j]);
        }
    }

    int num =0;
    bool bol = true ;
    ll i2=-1,j2=-1;

    for(int i=0;i<n;++i) {
        num =0 ;
        for(int j=0;j<m;++j) {
            if(arr[i][j]==mx) {
                num+=1;
            }
        }
        if(num>1){
            if(bol){
                i2=i;
                bol=false ;
                continue;
            }

            cout << mx<<endl;
            return ;

        }
    }


   bol = true ;
   for(int j=0;j<m;++j) {
        num =0 ;
        for(int i=0;i<n;++i) {
            if(arr[i][j]==mx) {
                num+=1;
            }
        }
        if(num>1){
            if(bol){
                j2=j;
                bol=false ;
                continue;
            }
            cout << mx<<endl;
            return ;
        }
    }




    num=0;
     for(int i=0;i<n;++i) {
         for(int j=0;j<m;++j) {

             if(i==i2||j==j2)continue;


             if(arr[i][j]==mx){
                num+=1;
             }
         }
     }

     if(num>2&&i2==-1&&j2==-1){
        cout << mx <<endl;
        return ;
     }else if(num>1&&(i2==-1||j2==-1)&&!(i2==-1&&j2==-1)){
            cout <<mx<<endl;
            return ;
      }else if ( num>0&&i2!=-1&&j2!=-1){
            cout <<mx<<endl;
            return ;
      }

     cout << mx-1<<endl;










}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
