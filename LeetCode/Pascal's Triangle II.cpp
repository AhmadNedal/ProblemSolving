class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v;
        vector<int> v2;

        v2.push_back(1);
        v.push_back(v2);

        for(int i = 1;i<=rowIndex; ++i) {
            v2.clear();
            v2.push_back(1);

            for(int j = 1; j < v[i-1].size(); ++j)
                v2.push_back(v[i-1][j]+v[i-1][j-1]);

            v2.push_back(1);
            v.push_back(v2);
        }

        return v[rowIndex];
    }
};
