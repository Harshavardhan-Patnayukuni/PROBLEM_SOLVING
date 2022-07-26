class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> res(n);
        for(int i=0;i<n;i++){
            res[i].push_back(1);
            for(int j=1;j<i;j++){
                if(i==1 and j==1) continue;
               else res[i].push_back(res[i-1][j-1]+res[i-1][j]);
            }
           if(i>0) res[i].push_back(1);
        }
    return res;}
};
