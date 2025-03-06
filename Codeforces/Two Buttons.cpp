#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/520/problem/B



void solve() {
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
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
