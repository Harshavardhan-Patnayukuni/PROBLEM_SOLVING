class Solution {
public:
    int titleToNumber(string col) {
        long sum=0;
        for(int i=0;i<col.size();i++){
            sum=(sum*26)+col[i]-64;
        }
        return (int)sum;
    }
};