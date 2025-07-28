#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}

ll n,m;
vector <ll>v;
ll maxnum=0,maxit =0 ;



void solve() {


    ll n,k; cin>>n>>k;
    ll arr[n];
    for (auto &it : arr )cin>>it ;



    ll up=0,les=0,counter=0;
    ll index =0,lastindex=0;

    if (arr[0]<=k) {
        if (arr[1]<=k) {
            cout <<"YES"<<endl;
            return ;
        }else {
            index=2;
            counter =1;
        }
    }


    for (int i=index;i<n;++i){
        if (arr[i]<=k){
            les++ ;
        }else {
            up++;
        }

        if (les>=up&&les!=0){
            les=0;
            up=0;
            counter++;
        }

        if (counter==2){
            lastindex=i ;
            break;
        }

    }

    if (counter==2&&lastindex!=n-1){
        cout<<"YES"<<endl;
        return;
    }



    up=0,les=0,counter=0;
    index=n-1,lastindex=0;

     if(arr[n-1]<=k) {
        if (arr[n-2]<=k) {
            cout <<"YES"<<endl;
            return ;
        }else {
            index=n-3;
            counter=1;
        }
    }


    for (int i=index;i>-1;--i){

        if (arr[i]<=k){
            les++ ;
        }else {
            up++;
        }

        if ((les==up&&les!=0)){
            les=0;
            up=0;
            counter++;
        }

        if (counter==2){
            lastindex=i;
            break;
        }

    }

      if (counter==2&&lastindex!=0){
        cout<<"YES"<<endl;
        return;
    }





    les=0,up=0,counter=0,lastindex=0;

    for (int i=0;i<n;++i){
        if (arr[i]<=k){
            les++ ;
        }else {
            up++;
        }
        if ((les>=up&&les!=0)){
            les=0;
            up=0;
            counter++;
            lastindex=i ;
            break ;
        }
    }

    les=0,up=0;

    if ( counter ==0 ) {
        cout << "NO"<<endl ;
        return ;
    }


    for (int i=n-1;i>lastindex;--i){
        if (arr[i]<=k){
            les++ ;
        }else {
            up++;
        }
        if ((les>=up&&les!=0)){
            les=0;
            up=0;
            counter++;
            cout << "YES"<<endl;
            return ;
        }
    }









        cout << "NO"<<endl ;





}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
