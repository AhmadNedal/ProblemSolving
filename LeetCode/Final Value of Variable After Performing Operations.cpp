class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans =0;
        for(auto it : operations)
            ans+= (it[0]=='-'||it[it.size()-1]=='-'?-1:1);

        return ans;
    }
};
