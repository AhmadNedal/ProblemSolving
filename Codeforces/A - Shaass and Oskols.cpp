
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


    int n,m; cin >>n;
    int arr[n];
    for (int i=0;i<n;++i){
        cin >>arr[i];
    }

    cin >>m;


    while ( m-- ) {

        int line , num ; cin>>line>>num;
        line--;
        if ( line==0 ){
            arr[line+1]+=arr[line]- num ;
            arr[line]=0;
            continue;
        }

        if ( line == n-1) {
            arr[line-1] += num-1;
            arr[line]=0 ;
            continue ;
        }

        arr[line+1]+=arr[line]-num ;
        arr[line-1]+=num-1;
        arr[line]=0 ;

    }

    for (int i=0;i<n;++i){
        cout <<arr[i] << " "  ;
    }



}







    int main()
    {


        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1;//cin>>t;

        while (t--) {
         solve();
       }



        return 0;
    }


