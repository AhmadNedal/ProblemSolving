class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        for(auto it : s ) {
            if (
                tolower(it)=='i'||
                tolower(it)=='e'||
                tolower(it)=='a'||
                tolower(it)=='u'||
                tolower(it)=='o'){

            v.push_back(it);
            }
        }

        reverse(v.begin(),v.end());
        int idx =0 ;
        for(int i=0;i<s.size();++i){
             if (
                tolower(s[i])=='i'||
                tolower(s[i])=='e'||
                tolower(s[i])=='a'||
                tolower(s[i])=='u'||
                tolower(s[i])=='o'
            ){
                s[i]=v[idx];
                idx+=1;
            }
        }
        return s ;
    }
};
