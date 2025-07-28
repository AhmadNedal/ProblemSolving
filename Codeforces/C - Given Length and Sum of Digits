
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #include <limits>
    #define ll long long
    int N = 1e5 + 1;
    ll isPrime [1000001] = {0} ;
    vector<int> v;

 void solve() {

       int m,s; cin>>m>>s;
       if ( (m==1&&s>9) || (m*9<s) || ( m>1 && s==0) ){
        cout << -1<<" " <<-1 <<endl;
        return;
       }
       if (m==1&&s<10){
        cout <<s<<" "<<s<<endl;
        return ;
       }

       string ans = "" ;
       int num=s ;
       for(int i=0;i<m;++i){
        if(num>=9) {
            ans+="9";
            num-=9;
        }else if(num<9){
            char ch = num+'0';
            ans += ch ;
            num = 0;
        }else {
            ans +="0" ;
        }
      }

       string str = ans ;
       reverse(ans.begin(),ans.end());
        bool bol = true;
       for ( int i=0;i<ans.size();++i) {
            if (ans[i] == '0'&& i==0){
                ans[i]++;
                bol = false  ;
            }else if(bol){
                break;
            }else if ( ans[i]!='0'){
                char ch = ans[i];
                ch-- ;
                ans[i] =ch ;
                break;
            }

       }

      cout<<ans<<" "<<str <<endl;

    }








    int main()
    {


        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1;

        while (t--) {
         solve();
       }
        return 0;
    }
