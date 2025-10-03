

        #include<bits/stdc++.h>
        using namespace std;
        #define ll long long
        #include <limits>
        #define ll long long
        vector<long long> primes;
        const long long  N= 1e5+90;
        vector<bool> isPrime(N , 1 );



    void solve() {


        string str; cin>>str;
        //int num;cin>>num;
        int n=str.size()+1;
        int arr[n] ={0};

        for(int i=0;i<str.size();++i){
            if(str[i]==str[i-1]){
                arr[i+1]=arr[i]+1;
            }else {
                arr[i+1]=arr[i];
            }
        }


        int l,r,m;cin>>m ;
        while ( m-- ) {
            cin>>l>>r;
            cout <<arr[r]-arr[l] <<endl;
        }


  }







        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);

            int t=1;
           // cin>>t;

            while (t--) {
             solve();
           }

            return 0;
        }



