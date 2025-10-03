
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





    int n,k ; cin>>n>>k ;

    int arr[n] ;


    for ( int i=0;i<n;++i){
        cin >>arr[i] ;
    }

    long long sum =0;
    for (int i=0;i<n;++i){
        int num ; cin >> num ;

        if ( num==1 ){
            sum += arr[i];
            arr[i] = 0;
        }
     }


        int l=0,r=0,counter=0,maxx=0;

        while (r<n){
            if(r-l<k){
                counter+=arr[r] ;
                r++;
            }else{
                maxx = max ( counter,maxx) ;
                counter-=arr[l];
                l++;
            }

        }
        maxx = max ( counter,maxx) ;
        cout << maxx+sum <<endl;



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



