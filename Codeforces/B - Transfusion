
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;


    void solve() {



        long long  n ; cin >>n ;
        long long  sum1=0,sum2=0,num;

        for(int i=0;i<n;++i) {
            cin >> num ;
            if (i%2==0) {
                sum1+=num;
            }else{
                sum2+=num;
            }
        }
        long long counter1=n/2,counter2=n/2 ;
        if (n%2==1){
            counter1++;
        }

        long long avg=(sum1+sum2)/n;
        if ( (sum1/counter1) == (sum2/counter2) && (avg*n==(sum1+sum2)) ){
            cout << "YES"<<endl;
        }else {
        cout << "NO"<<endl;
        }







    }




    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1 ; cin >> t ;

        while (t--) {
         solve();
       }

        return 0;
    }
