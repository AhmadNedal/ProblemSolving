    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e4 + 10;

    ll isPrime [1000001] = {0} ;

    void solve() {


	int n; cin >> n;
	vector <int> v;
	int num;
	cin >> num;
	v.push_back(num);
	for (int i=1 ; i<n ; ++i) {
		cin >> num;
		v.push_back( (num + v[i - 1]) );
	}



 int m ; cin >>m ;
	for (int i=0; i< m ; ++i )  {
         ll counter; cin >> counter ;

         auto it  = lower_bound(v.begin(), v.end(), counter );

         //= find(v.begin(), v.end(), number);
         int index =  it - v.begin();

         cout<< index +1 <<endl;

	}








    }




    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);


        int t =1 ;

        while (t--) {
         solve();
       }


        return 0;
    }
