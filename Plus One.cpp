class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        int i;
        for(i=len-1;i>=0;i--){
          if(digits[i]==9){ digits[i]=0;}
            else{digits[i]=digits[i]+1;
                return digits ;}}
        digits.push_back(0);
        digits[0]=1;
        return digits;}
};
