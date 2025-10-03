
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


            long long num ; cin >>num ;

            if ( num%2==1 ){
                cout << "YES"<<endl;
            }else if(num==2) {
                cout << "NO"<<endl;
            }else {

            bool bol = true;

            while (num>1){


                if( num%2==1){
                    cout << "YES"<<endl;
                    bol = false;
                    break;
                }
               num/=2;
            }


            if ( bol ){
                cout << "NO"<<endl ;
            }
        }




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



