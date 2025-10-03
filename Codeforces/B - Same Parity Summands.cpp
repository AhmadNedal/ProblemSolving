#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {


    ll n,x; cin>>n>>x;
    int oddOrEven =0;

    if(n>=x&&(n-x+1)%2==1){
        oddOrEven=1 ;
    }else if(n>=x*2&&(n-((x-1)*2))%2==0){
        oddOrEven=0;
    }else {
        cout << "NO"<<endl;
        return ;
    }

    cout << "YES"<<endl;

    while (x>1){
        x-=1;

        if(oddOrEven==0){
            cout << "2 ";
            n-=2;
            continue;
        }

        cout << "1 ";
        n-=1;

    }


    cout << n <<endl;









}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
