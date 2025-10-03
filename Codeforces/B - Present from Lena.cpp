#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){
    short num=0,n;

    cin>>n;

    for(short i=0;i<n+1;++i){
        for(short i=0;i<(n-num)*2;++i)
           cout << " ";

        for(short j=0;j<=num;++j)
            cout << j << ( num!=0 ?" ":"" ) ;


        for(short j=num-1;j>-1;--j)
            cout << j << (j!=0?" ":"");
        
        num+=1;
        cout<<endl;
    }


    num-=2;

    for(short i=n;i>0;--i){

        for(short i=0;i<(n-num)*2;++i)
           cout << " ";

        for(short j=0;j<=num;++j)
            cout<<j<<(num!=0?" ":"");

        for(short j=num-1;j>-1;--j)
            cout<< j << (j!=0?" ":"");

        if(num!=0)cout<<endl;
        num-=1;
    }





}

int main(){
    int t=1;//cin>>t;
    while (t--)
        solve();

    return 0;
}
