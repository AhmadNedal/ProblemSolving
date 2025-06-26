    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;


    void solve(){

        ll n,k,counter=0;cin>>n>>k ;
        k++;
        string str ;cin>>str;
        bool bol = false;

        for(int i=0;i<n;++i) {

            if(counter>=k) {
                bol=true ;
            }

            if(str[i]=='0'){
                counter++;
            }else {
              counter=0;
            }
        }
           if(counter>=k) {
                bol=true ;
            }
        if(bol){
            cout<<"yes"<<endl;
        }else {
            cout<< "no"<<endl;
        }

     }

                int main()
                {
                    ios::sync_with_stdio(0);
                    cin.tie(0);

//                   #ifndef ONLINE_JUDGE
//                        freopen("C:\\Users\\ahmad\\OneDrive\\Desktop\\Cionn\\ahmadout.txt", "w", stdout);
//                        freopen("C:\\Users\\ahmad\\OneDrive\\Desktop\\Cionn\\ahmad.txt", "r", stdin);
//                    #endif

                    int _=1 ;cin >>_;
                    while(_--){
                        solve() ;
                    }

                    return 0;
                }
