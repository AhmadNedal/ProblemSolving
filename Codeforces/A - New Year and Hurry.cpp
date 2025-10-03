#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,l=0,ans=0,mn=LLONG_MAX,r=MOD,y;
vector<ll>b,v;


void solve(){

   cin>>n>>y;
   y=-y+240;
   int num=1;

   while(num<1+n&&y>=num*5){
        y-= num*5;
        num+=1;
   }

   cout << --num <<endl;







}



int main(){
    SPEED;
    int t=1;

    while (t--)solve();

    return 0;

}
