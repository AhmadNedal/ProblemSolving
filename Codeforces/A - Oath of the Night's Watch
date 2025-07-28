
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




    int n; cin >>n;
    long long  arr[n];

    for ( int i=0;i<n;++i){
        cin >>arr[i];
    }
    if ( n<=2 ) {
        cout <<"0" <<endl;
        return  ;
    }

    sort(arr, arr + n);
    long long first =arr[0] ,last= arr[n-1] ;
    long long counter=0, index=n-1;
    for ( int i=0;i<n;++i){

        if ( arr[i]==first ){
            counter ++ ;
        }
        if(arr[index] == last ) {
        counter ++ ;
        }

        if  (arr[index]!=last && arr[i]!=first ) {
            break;
        }
        index -- ;

    }

    if  (n-counter <= 0 ){
        cout << "0"<<endl;
    }else {
    cout <<n-counter <<endl;
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

