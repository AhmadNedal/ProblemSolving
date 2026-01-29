class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        long long ans=0;
        for(auto it : nums)
            ans+=it%3!=0;

        return ans;
    }
};
