#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Problem Link : https://codeforces.com/contest/792/problem/C




void solve() {

 string str,ans; cin>>str;

    int arr[3]={0};

    for(int i=0;i<str.size();++i){
        arr[ str[i]%3 ]++;
    }


    if (arr[2]%3==2&&arr[1]%3==0&&arr[1]>0){
        arr[1]-=2;
        arr[2]-=2;
    }else if (arr[2]%3==0&&arr[1]%3==2&&arr[2]>0){
        arr[1]-=2;
        arr[2]-=2;
    }

    int num =0;
    for (int i=1;i<str.size();++i){
        if(str[i]=='0')num++;
    }

    if(num>1){
        int num2 ;

        if ( (str[0]-'0')==2){
            num2=1;
        }else {
            num2=2;
        }
        if (arr[ (str[0]-'0')%3 ]<2&&arr[num2]>0){
            arr[num2]-=1;
            arr[ (str[0]-'0')%3 ]-=1;
        }
    }


    arr[2]%=3;
    arr[1]%=3;
    while (arr[1]>0&&arr[2]>0) {
        arr[1]-=1;
        arr[2]-=1;
    }



    for (int i=str.size()-1;i>-1;--i){

        if ( (str[i]-'0')%3 ==1 && arr[1]>0 ){
            arr[1]-=1;
            continue;
        }else if ( (str[i]-'0')%3==2 && arr[2]>0 ){
            arr[2]-=1;
            continue;
        }

        ans += str[i];
    }

    reverse(ans.begin(),ans.end());


    string answer="";
    bool bol = true ;

    for (int i=0;i<ans.size();++i) {
        if (ans[i]=='0'&&bol){
            continue;
        }else {
            answer+=ans[i];
            bol = false ;
        }
    }


     if(answer.empty()){

        for (int i=0;i<str.size();++i){
            if (str[i]=='0'||str[i]=='3'||str[i]=='6'||str[i]=='9'){
                cout << str[i]<<endl;
                return ;
            }
        }

         cout << "-1"<<endl;

        return ;
    }

    cout << answer << endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
