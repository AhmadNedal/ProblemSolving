#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Link Problem : https://codeforces.com/contest/1692/problem/D

void solve() {
    string str;
    int num;
    cin >> str >> num;

    int hour = stoi(str.substr(0, 2));
    int mini = stoi(str.substr(3, 2));
    set<string> sett;

    int AllMinit = hour * 60 + mini;

    int t =1 ;

    while ( t<1444) {

        int minits = (AllMinit+t*num)%1440;
        hour = minits / 60;
        int minit = minits % 60;

            string timeHour = "" , timeMinit="";
            timeHour +=(hour/10)+'0';
            timeHour +=(hour%10)+'0';
            timeMinit +=(minit/10)+'0';
            timeMinit +=(minit%10)+'0';

            string ans =timeHour ;
            ans +=":";
            ans+=timeMinit;
            string re = ans ;

            reverse ( re.begin(),re.end());
            if (re==ans){
                sett.insert(ans);
            }


        t+=1 ;
    }

    cout << sett.size() << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)solve();

    return 0;
}
