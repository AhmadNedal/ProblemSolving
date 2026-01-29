class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idx =0 ;

        for(int i=0;i<t.size() ;++i) {
            if ( s[idx] == t[i])
            idx+=1;

            if ( idx==s.size())break;
        }

        return idx==s.size();

    }
};
