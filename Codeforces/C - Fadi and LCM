#include <bits/stdc++.h>
#define ll long long
using namespace std;



    void solve(){



        ll n ; cin>>n ;
        ll ans=1e13;
        ll a=1e13,b=1e13;

        for (ll i=1;i*i<=n;++i){

            if(n%i==0){
                if (((i*(n/i))/__gcd(i,(n/i)))==n&&max(i,n/i)<ans){
                    a=i ;
                    b=n/i;
                    ans = max(i,n/i) ;
                }
            }
        }
        cout << a << " " <<b<<endl;


     }

                int main()
                {
                    ios::sync_with_stdio(0);
                    cin.tie(0);

//                   #ifndef ONLINE_JUDGE
//                        freopen("C:\\Users\\ahmad\\OneDrive\\Desktop\\Cionn\\ahmadout.txt", "w", stdout);
//                        freopen("C:\\Users\\ahmad\\OneDrive\\Desktop\\Cionn\\ahmad.txt", "r", stdin);
//                    #endif

                    int _=1 ;//cin >>_;
                    while(_--){
                        solve() ;
                    }

                    return 0;
                }
