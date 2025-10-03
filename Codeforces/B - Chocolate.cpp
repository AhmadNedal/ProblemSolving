using namespace std;
#include<iostream>    
#include<vector> 
#include<algorithm>
#include<array>
#include<limits>
#include<string>
#include<numeric>
#include<string>
#include<set>
#define ll long long
const int MAX_N = 1e5 + 1;
const long long  N = 1e5 + 1;


void solve() {
    
    int n;cin >> n; 
    vector <int> v; 
    bool bol = false;
    int counter = 1; 
    for (int i = 0; i < n;++i) {
        int num; cin >> num; 
        if (num == 1) {
            bol = true;  
            v.push_back(counter); 
            counter = 1;
        }
        else if (num == 0 && bol) {
            counter++; 
        }
    }


    if (v.size() == 1) {
        cout << "1" << endl; 
        return; 
    }
    else if (v.size() == 0) {
        cout << "0" << endl; 
        return;
    }

    ll answer = 1; 
    for (int i = 0; i < v.size(); ++i) {
        //cout << v[i] << endl;
        answer = answer * v[i];
    }

    cout << answer << endl; 

}





int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;// cin >> t;
    while (t--) {
        solve();
    }

    return 0; 
}
