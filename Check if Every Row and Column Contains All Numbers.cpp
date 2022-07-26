class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n;
        n=matrix.size();
        vector<set<int>> row(n),col(n);
        //cout<<n<<endl;
         int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                int num;
                num=matrix[i][j]-'0';
                if(row[i].count(num)!=0||col[j].count(num)!=0){
                    return false;
                }
                row[i].insert(num);
                col[j].insert(num);
            }
        }
        return true;
    }
};