        #include<bits/stdc++.h>
        using namespace std;
        #define ll long long
        #include <limits>
        #define ll long long
        int N = 10001;
        ll isPrime [1000001] = {0} ;
 



    void solve() {



      vector <ll>v1,v11,v2,v22;
      int n ;cin >> n;

      for (int i=0;i<n;++i){
        ll num ; cin >> num ;
        if (num%2==0){
            v1.push_back(num) ;
            v11.push_back(num) ;
        }else {
            v2.push_back(num) ;
            v22.push_back(num) ;
        }
      }

      sort(v11.begin(),v11.end());
      sort(v22.begin(),v22.end());

      if(v11==v1 && v22==v2) {
        cout << "YES" <<endl;
      }else {
      cout << "NO"<<endl;
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

