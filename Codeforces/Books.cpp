#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/279/problem/B



void solve() {


    int n ,k  ; cin >> n >>k ;
	vector<int >v;

	for (int i = 0;i < n; ++i) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	int l = 0, r = 0, counter = 0 , maxx =0 , count=0;

	while (r < n) {

		if (counter+v[r]<= k ) {
			counter += v[r];
			count++;
			r++;
		}
		else {
			maxx = max(maxx, count);
			count--;
			counter -= v[l];
			l++;
		}
	}

	maxx = max(maxx, count);

	cout <<  maxx << endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
