
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;

   void solve() {

        ll n; cin>>n ;

        if ( n==1 ){
           cout << "1" <<endl;
         
        }else if ( n<5){
        cout <<"2"<<endl;
        }else {
            
            
            ll sum=4,ans=2; 
            
            while(sum<n){
                
                ans++ ;
                sum++ ; 
                sum*=2; 
                
            }
            cout << ans <<endl; 
        
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
