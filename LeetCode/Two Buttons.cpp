
class Solution {
public:
    int countDigits(int num) {
        int ans =0 ;
        int tmp = num ;
        int number;
        while (tmp>0){
            number= tmp%10;
            tmp/=10;

            if (num%number==0)ans +=1;
        }

        return ans;
    }
};
