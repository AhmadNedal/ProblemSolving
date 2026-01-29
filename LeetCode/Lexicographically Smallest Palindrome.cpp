class Solution {
public:
    string makeSmallestPalindrome(string s) {
        for(int i=0;i<s.size()/2;++i)
                s[s.size()-i-1]=s[i]=min(s[i],s[s.size()-i-1]);

        return s ;

    }
};
