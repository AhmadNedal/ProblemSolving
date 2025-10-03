
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;



    void solve() {


        int n,a,b;
        cin>>n>>a>>b;
        string str ="" ;
        for ( int i=0;i<b;++i){
            char ch = i+97;
            str+= ch;
        }
        string ans="" ;

        int index=0;
        while (index < n) {
            if (n-index>=str.size() ){
                ans +=str;
                index +=str.size() ;
            }else {
            break;
            }

        }
        int num =0;
        for ( int i=index; i<n;++i) {
            ans+=str[num] ;
            num ++;
        }

        cout<<ans<<endl;  ;


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
