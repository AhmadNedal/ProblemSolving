class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        vector<bool> inc(n, true), dec(n, true);
        vector<long long> pref(n + 1, 0);

        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + nums[i];



        for (int i = 1; i < n; i++)
            inc[i] = inc[i - 1] && nums[i] > nums[i - 1];

        for (int i = n - 2; i >= 0; i--)
            dec[i] = dec[i + 1] && nums[i] > nums[i + 1];

        long long ans = LLONG_MAX;

        for (int i = 0; i < n - 1; i++) {
            if (inc[i] && dec[i + 1]) {
                long long left = pref[i + 1];
                long long right = pref[n] - left;
                ans = min(ans, llabs(left - right));
            }
        }

        return ans == LLONG_MAX ? -1 : ans;
    }
};
