
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;

    void solve() {



        string str ; cin>>str;

        for (int i=1; i<str.size();++i) {
            int index =i;
            for (int j=i-1;j>=0 ;--j) {

                if(str[index]>str[j]+1){
                    char ch= str[j];
                    str[j] = str[index]-1 ;
                    str[index] = ch ;
                    index=j;
                }else {
                break;
                }


            }


        }
        cout <<str<<endl;  ;








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
