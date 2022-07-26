class Solution {
public:
    void sum(vector<int> &can,int target,vector<vector<int>> &res,vector<int> &r,int i){
        if(target==0){
            res.push_back(r);
            return;
        }
        while(i<can.size()&&target-can[i]>=0){
            r.push_back(can[i]);
            sum(can,target-can[i],res,r,i);
            i++;
            r.pop_back();
        }
        
        return;
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        sort(can.begin(),can.end());
        can.erase(unique(can.begin(),can.end()),can.end());
        vector<int> r;
        vector<vector<int>> res;
        sum(can,target,res,r,0);
        return res;
    }
};
