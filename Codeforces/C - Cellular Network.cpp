#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}






void solve() {


    ll n,m,num; cin>>n>>m;
    vector <ll>Citys,Towers;

    for ( int i=0;i<n;++i) {
        cin>>num;
        Citys.push_back(num);
    }

    for ( int i=0;i<m;++i) {
        cin>>num;
        Towers.push_back(num);
    }



    ll number = 0 ;

    for(int i=0;i<Citys.size();++i) {

        auto it= lower_bound(Towers.begin(),Towers.end() , Citys[i]);


        if (it!=Towers.end()) {

            int index = it - Towers.begin();


              if (index==0){
                number = max ( number , (max(Towers[index],Citys[i])-min(Towers[index],Citys[i])) );
              }else {
                  ll n2 (max(Towers[index],Citys[i])-min(Towers[index],Citys[i]));
                  ll n3= (max(Towers[index-1],Citys[i])-min(Towers[index-1],Citys[i]));
                    number = max ( number , min(n2,n3) );

             }
        } else {
              number = max ( number , (max(Towers[Towers.size()-1],Citys[i])-min(Towers[Towers.size()-1],Citys[i])) );
        }
    }

    cout << number << endl;









}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;

    while (t--)solve();

    return 0;
}
