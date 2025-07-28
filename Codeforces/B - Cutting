#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>
#define ll long long
int N = 10001;
ll isPrime [1000001] = {0} ;
vector<int> v;
int arr[10001];




void solve() {


    int n,k ; cin >> n >>k;
    int arr[n] ={0};
    vector <int> v ;

    for ( int i=0;i<n;++i) cin >>arr[i];


    int numodd=0,numeven=0,number=0;

    for ( int i=0;i<n-1;++i) {

        if ( arr[i]%2 ){
            numodd++;
        }else {
        numeven++;
        }

        if ( numodd==numeven && abs (arr[i]-arr[i+1]) <=k ){
            v.push_back(abs( arr[i]-arr[i+1])) ;
        }


    }


       sort(v.begin(), v.end());

    for(int i=0 ;i<v.size();++i) {

       if (k>=v[i]) {
          k-=v[i];
          number ++ ;
       }else {
       break;
       }
    }

    cout << number <<endl;

}




    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
