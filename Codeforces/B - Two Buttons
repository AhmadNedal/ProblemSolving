   #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    const int MAX_N = 1e5 + 1;
    const long long N = 1e5+1;
    vector<bool> isPrime(N , 1 );
 
        
        
 
 
    void solve() {
 
     ios::sync_with_stdio(0);
     cin.tie(0);
 
 
        int n ,m ; cin >>n>>m  ;
 
 
        bool visited [N] = {0} ;
        ll value [N] = {0} ;
 
 
 
	visited[n] = 1 ;
	value[n]   = 0 ;
	queue<int> q;
	q.push(n);
 
 
    while (!q.empty()) {
 
 
		int num = q.front();
		q.pop();
		int nummul = num * 2;
 
		if (!visited[nummul] && nummul < N) {
			q.push(nummul);
			visited[nummul] = 1;
			value[nummul] = value[num] + 1;
		}
 
		int minn = num - 1;
		if (!visited[minn] && minn > 0 ) {
			q.push(minn);
			visited[minn] = 1;
			value[minn] = value[num] + 1;
		}
 
		if ( nummul == m || minn == m ){
            cout << value[num]+1<<endl;
                    return  ;
		 }
 
 
 
	}
 
 
 
 
 
 
 
 
    return ;
 
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
