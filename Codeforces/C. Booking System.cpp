#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Problem Link : https://codeforces.com/contest/416/problem/C


void solve() {

    ll n ; cin >>n ;
    ll num ,num2 ;
    vector<tuple<ll, ll, ll>> v;

    for (int i=0 ; i <n;++i){
        cin>>num >> num2 ;
        v.push_back({num2,num,i+1});
    }

    sort ( v.rbegin() , v.rend());

    cin >> n;
    vector <pair<ll,ll>> table;

    for ( int i=0; i < n;++i) {
        cin>>num ;
        table.push_back({num,i+1});
    }

    sort ( table.begin() , table.end()) ;

    num =0 ;
    num2 =0 ;
    vector<pair<ll,ll>>ans ;

    for (auto [price,number,index] : v)  {


       // auto it2 = lower_bound ( table.begin() , table.end(), number ) ;

        auto it2 = lower_bound(table.begin(),table.end(),make_pair(number, 0LL));

        if(it2!=table.end()) {

            num2+=price ;

            ans.push_back({index,it2->second});

            table.erase(it2);
            num +=1;
        }
    }


    cout << num  << " " << num2 <<endl;

    for (auto it : ans ) {
        cout << it.first << " "<<it.second <<endl;
    }











}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;//cin>>t;
    while (t--)solve();

    return 0;
}


