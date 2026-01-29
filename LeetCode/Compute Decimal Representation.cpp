class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>v;
        string s = to_string(n);
        int num =0 ;
        for(int i=0;i<s.size();++i) {
            num = s[i]-'0';
            if(num==0)
                continue;
            for(int j=i;j<-1+s.size();++j)
                num*=10;

            v.push_back(num);
        }

        return v;
    }
};
