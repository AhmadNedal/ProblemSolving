
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


        int m,a,b,c,counter=0; cin >>m>>a>>b>>c;
        int ma=m, mb=m ;

        if(a>m) {
            counter +=ma ;
            ma=0;
        }else {
            ma-=a ;
            counter +=a ;
        }

        if(b>m) {
            counter +=mb ;
            mb=0;
        }else {
            mb-=b ;
            counter +=b ;
        }


        if ( ma > 0 ) {
            if ( ma<=c){
                counter += ma ;
                c-=ma;
            }else {
            counter += c ;
            c =0;
            }
        }

        if ( mb>0 ){
              if ( mb<=c){
                counter += mb ;
                c-=mb;
            }else {
            counter += c ;
            c =0;
            }
        }
        cout<< counter <<endl ;








}







    int main()
    {


        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1;cin>>t;

        while (t--) {
         solve();
       }


        return 0;
    }
