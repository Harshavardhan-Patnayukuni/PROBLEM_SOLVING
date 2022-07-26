class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0;
        int right=m-1;
        int top=0;
        int bottom=n-1;
        int direction=1;
        while(left<=right and top<= bottom){
            if(direction==1){
                for(int i=left;i<=right;i++){
                    result.push_back(matrix[top][i]);}
                    top++;
                    direction=2;
            }
            else if(direction==2){
                for(int i=top;i<=bottom;i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
                direction=3;
            }
                else if(direction==3){
                    for(int i=right;i>=left;i--){
                        result.push_back(matrix[bottom][i]);
                    }
                    bottom--;
                    direction=4;
                }
                else if(direction==4){
                    for(int i=bottom;i>=top;i--){
                        result.push_back(matrix[i][left]);
                    }
                    left++;
                    direction=1;
                }
            
        }
   return result; }
};