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

    int n ; cin >> n ;
    int arr[n];

    long long sum=0 ;
    for ( int i=0;i<n;++i){
        cin >>arr[i] ;
        sum+=arr[i] ;
    }

    long long sum2=0,counter=0;

    for ( int i=0;i<n-1;++i) {
        sum2 += arr[i] ;
        long long num = sum-sum2 ;

        if ( sum2==num){
            counter ++ ;
        }
    }

    cout <<counter <<endl;

}


    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }
