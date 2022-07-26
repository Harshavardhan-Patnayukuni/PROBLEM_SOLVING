class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto[a,b]:mpp){
          pq.push({b,a});  
        }
        while(k>0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
    return res;}
}o