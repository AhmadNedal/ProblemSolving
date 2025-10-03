#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){

    int a,b,c; 
    cin>>a>>b>>c; 
    int num =a+b+c; 
    
    if(num==180&&a>0&&b>0&&c>0)
        cout << "YES"<<endl; 
    else
        cout << "NO"<<endl; 
    
    
}


int main(){
    int t=1;cin>>t;
    while (t--)solve();
    return 0;
}
