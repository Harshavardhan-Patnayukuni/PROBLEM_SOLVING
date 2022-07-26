class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n=m.size();
        int i,j;
        for(i=0;i<n;i++){
        for(j=0;j<i;j++){
                swap(m[i][j],m[j][i]);
            }}
        
        for(i=0;i<n;i++){
            reverse(m[i].begin(),m[i].end());
        }
    }
};
