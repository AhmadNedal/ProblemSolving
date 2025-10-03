
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;


    void solve() {


    map<int,int> m  ;
    int n,k; cin>>n>>k;


    for (int i=0;i<n;++i) {
     int num; cin>>num;

     auto it = m.find(num);
    if (it != m.end())
     {
        m[num]++;
     }
    else
    {
        m.insert({num,1});
    }
    }        int value [m.size()] ;
        int arr [m.size()] ;

        int index=0;
        for (auto a : m) {
            value[index] = a.second;
            arr[index] = a.first;
        index ++;
    }    int l=0,r=0,counter=0,maxx=0,numofk=0,last=0;


     while ( r<m.size() ){
        if(r-l>=k){
            maxx = max(maxx,counter);
            counter -=value[l];
            l++;
            continue;
        }

        if ( r == 0 ) {
            counter +=value[0] ;
            last = arr[0];
            r++;

        }else if(arr[r]==last+1){
            counter +=value[r] ;
            last=arr[r];
            r++ ;
        }else {
            maxx = max(maxx,counter);
            counter=value[r];
            last = arr[r] ;
            l=r;
            r++;


        }


    }

        maxx = max(maxx,counter);



    cout <<maxx <<endl;



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
