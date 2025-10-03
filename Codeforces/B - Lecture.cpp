
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

       int n,m ; cin >> n >> m;

     vector<string> v1;
     vector<string> v2;

        for(int i=0;i<m;++i){
            string str1,str2; cin >>str1 >>str2 ;
            v1.push_back(str1) ;
            v2.push_back(str2) ;
        }






        for(int i=0;i<n;++i){
          string str; cin >>str;
        auto it = find(v1.begin(), v1.end(), str);
        int index = distance(v1.begin(), it);

        if ( v1[index].size()<= v2[index].size()){
            cout <<v1[index] <<" ";
        }else {
            cout <<v2[index] <<" ";
        }

       }



    }







    int main()
    {


        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1;//cin>>t;

        while (t--) {
         solve();
       }


        return 0;
    }
