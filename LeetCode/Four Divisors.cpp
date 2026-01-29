class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int num =0 , cur =0 ;
        long long sum =0;

        for (int i=0;i<nums.size();++i){
            num =0,cur=0 ;

            for(int  j=1;j*j<=nums[i];++j){
                if(nums[i]%j==0){
                    cur += j;
                    if(j*j!=nums[i]){
                        cur+=nums[i]/j;
                        num+=1;
                    }
                    num+=1;
                }
            }

            if (num==4)sum+=cur;

        }

        return sum ;
    }
};
