#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/1294/problem/C



void solve() {


       ll n,m,x ; cin >>n>>m>>x ;
        string arr[n];

        vector <pair<ll,ll>> v;

        string str ;
        int arr3[26] ={0} ;

        bool bol = false ;
        for (int i=0;i<n;++i) {
            cin>>arr[i] ;
            str = arr[i] ;

             for(int j=0;j<str.size();++j){
                if (str[j]=='S'){
                    v.push_back(make_pair(i,j));
                }else {
                    arr3[str[j]-97]=1;
                }
                if (isupper(str[i])){
                    bol = true ;
                }

            }
        }

        int arr2 [26] ={0} ;
        int num =100001;
        for (int i=0;i<n;++i) {
            for(int j=0;j<m;++j){
                num = 1000001 ;
                if ( arr[i][j]=='S'){
                    continue;
                }
                for (int k=0;k<v.size();k++){
                    ll xx = (v[k].first-i)*(v[k].first-i);
                    ll yy = (v[k].second-j)*(v[k].second-j);
                    int number = xx+yy ;
                    num = min(num,(number)) ;
                }
                if (num>(x*x)&&arr2[arr[i][j]-97]!=2 ){
                    arr2[arr[i][j]-97]=1 ;
                }else {
                    arr2[arr[i][j]-97]=2 ;
                }

            }

        }




        ll hand=0,numch ; cin >>numch;
        string str2 ;cin>>str2 ;





        for (int i=0 ;i<numch ;++i) {
            char ch2 = str2[i] ;
            char ch = tolower(ch2);

            if (arr3[ ch-97 ]==0){
                cout << "-1" <<endl;
                return ;
            }

            if (!(islower(str2[i]))){


              if ( v.empty() ){
                    cout << "-1" <<endl ;
                    return ;
               }

                if ( arr2[tolower(str2[i])-97] == 1 ){
                    hand ++;
                }
            }

        }

        cout << hand <<endl;


}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
