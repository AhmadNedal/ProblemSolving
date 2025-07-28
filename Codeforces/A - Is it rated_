
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;



    void solve() {
                                                   
        int n ;cin>>n;
        int lastnum1=N,lastnum2=N;
        bool bol1=false,bol2=false ;

        for ( int i=0;i<n;i++){
            int num,num1; cin >>num>>num1;

            if ( num>lastnum1||num1>lastnum2 ){
                bol1 =true;
            }
            if (num1!=num){bol2=true;}
            lastnum1=num ;
            lastnum2=num1;
        }
        if ( bol2 ){
            cout << "rated"<<endl;
        }else if ( bol1 ) {
        cout << "unrated" <<endl;
        }else {
        cout << "maybe" <<endl;}


    }




    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        
         solve();

        return 0;
    }
