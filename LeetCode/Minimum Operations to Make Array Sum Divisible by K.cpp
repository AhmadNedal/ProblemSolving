class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum =0;
        for(auto it : nums)
            sum+=it;

        return sum%k;
    }
};
