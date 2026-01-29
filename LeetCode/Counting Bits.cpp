class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        int num =0 ;
            v.push_back(0);
        for (int i=1;i<n+1;++i){
            num =0;
            int x=i ;
            while (x > 0) {
                if (x & 1) num++;
                x >>= 1;
            }

            v.push_back(num);

        }

        return v;

    }
};
