#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {

    ll m,n,num;
    cin >>n>>m;

    priority_queue <int> pq  , pq2 ;

    for (int i=0 ; i<m;++i) {
        cin >> num;
        pq.push(num) ;
        pq2.push(-num) ;
    }



    int ans=0 ;
    for (int i=0;i<n;++i) {
        num  = pq.top() ;
        pq.pop();
        ans += num ;

        if(num>0){
            pq.push(num-1);
        }
    }

    cout << ans << " " ;

    ans=0;
    while(n--){
        num  = pq2.top() ;
        pq2.pop();
        num=-num;
        ans +=num;
        num=num-1;
        if(num>0){
            pq2.push(-num);
        }
    }



    cout << ans <<endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin >>t ;


    while (t--)solve();

    return 0;
}
