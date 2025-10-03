#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Problem Link : https://codeforces.com/contest/1790/problem/B

void solve() {

    int n,s,r;
    cin >>n>>s>>r;
    
    cout << s-r << " ";
    s-= (s-r);
    n-=1;
    
    int num  = s/n; 
    int mod = s%n; 
    
    while ( n-- ) {
        
        if(mod>0){ 
            cout << num+1 << " "; 
            mod-=1;
            continue ;
        }
        
        cout << num << " "; 
    }
    
    


}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t ;
    while (t--)solve();

    return 0;
}
