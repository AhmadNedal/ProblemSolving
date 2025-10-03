#include <bits/stdc++.h>
#define ll long long
using namespace std;




void speed(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}






void solve(){
        ll n , x ; 
        cin>>n>>x;
 
        ll num,odd=0,even=0;
 
        for (int i=0;i<n;++i) {
            cin>>num;
            if (num%2==0)even++;
            else odd++;
        }
 
        bool bol=false;
 
        if (odd==0||even==n||(odd==n&&x%2==0)) {
            cout << "NO\n";
            return;
        }
 
        if (even>=x) {
            bol=true;
        } else {
            num=x-even;
 
            if (x==n) {
                if(num%2==1){
                    if(num%2==1)bol=true;
                }
            }else bol=true ; 
    }
    
    if (bol)
        cout <<"YES"<<endl;
    else
        cout <<"NO" <<endl;
}

int main() {
    speed();

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
