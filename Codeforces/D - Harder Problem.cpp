
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

        int n,num ; cin >>n ;
        vector <int>arr(n,-1);
        int freq [n+1] ={0} ;
        for(int i=0;i<n;++i){
            cin >> num;
            if ( freq[num] ==0 ){
                arr[i]=num ;
                freq [num]= 1 ;
            }
        }


        int val =1  ;
        for (int i=0;i<n;++i){
            if ( arr[i] == -1 ){
                while (freq[val]){
                    val ++;
                }
                arr[i] = val ;
                freq[val]=1 ;
            }

        }



        for ( int i=0;i<n;++i){
            cout << arr[i] << " " ;
        }
        cout << endl;


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
