#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define all(v) v.begin(),v.end()



bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}





void solve() {
    ll n ;
    cin >>n ;

    int arr[n];
    for (int i=0;i<n;++i)cin>>arr[i];

    int num =0 ;

    for (int i=1;i<n-1;++i) {

        if (arr[i]==0&&arr[i+1]==1&&arr[i-1]==1) {
            arr[i+1]=-1;
            num ++;
        }
    }


    cout << num <<endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
