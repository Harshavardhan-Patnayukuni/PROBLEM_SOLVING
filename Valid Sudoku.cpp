class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9),col(9),box(9);
        int i,j;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(board[i][j]=='.'){ continue;}
                int num;
                num=board[i][j]-'0';
                if(row[i].count(num)!=0||col[j].count(num)!=0||box[(i/3)*3+j/3].count(num)!=0){
                    return false;
                }
                row[i].insert(num);
                col[j].insert(num);
                box[(i/3)*3+j/3].insert(num);// look here trick is to decide to which box that element goes
            }
        }    return true;}
};
