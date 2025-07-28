#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>
#define ll long long
vector<long long> primes;
const long long  N= 1e5+90;
vector<bool> isPrime(N , 1 );



    void solve() {

        ll n,d ;cin>>n>>d ;

        vector <pair <ll,ll>>v;

        for (ll i=0,m,s;i<n;++i){
            cin>>m>>s;
            v.push_back(make_pair(m,s));
        }
        sort(v.begin(),v.end());

        ll l=0,r=0;
        ll maxfrind =0,currentfrind=0;
        while ( r < n) {


            if(v[r].first-v[l].first<d){
                currentfrind += v[r].second ;
                r++;
            }else {
                currentfrind -=v[l].second ;
                l++;
            }

            maxfrind = max ( currentfrind ,maxfrind );


        }
        cout <<maxfrind <<endl;








  }







        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);

            int t=1;
            //cin>>t;

            while (t--) {
             solve();
           }

            return 0;
        }

