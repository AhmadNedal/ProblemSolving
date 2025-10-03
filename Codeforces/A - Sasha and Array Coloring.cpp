#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>

void solve() {

    int n ; cin>>n;

    int arr[n];
    for(int i=0;i<n;++i) {
        cin >>arr[i] ;
    }

    sort(arr , arr+n) ;

    int index = n-1,sum=0;
    for (int i=0;i<n/2;++i){
        sum += (arr[index]-arr[i]) ;
        index -- ;
    }
    cout <<sum <<endl;





 }







        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
            int t=1;
            cin>>t;
            while (t--) {
             solve();
           }


            return 0;
        }
