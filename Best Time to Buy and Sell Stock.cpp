class Solution {
public:
    
    // kadanes algoritm for maxi or mini subset kind of problems 
    int maxProfit(vector<int>& nums){
    int temp=0;
    int maxi=0;
    for(int i=1;i<nums.size();i++){
        temp=temp+(nums[i]-nums[i-1]);
        temp=max(0,temp);
        maxi=max(maxi,temp);
    }
        return maxi;
    }
};

/*
java better solution
var maxProfit = function(prices) {
  const size = prices.length;
  let lowPrice = prices[0];
  let profit = 0;
  
  for(let i = 1; i < size; i++) {
    if(prices[i] < lowPrice) {
      lowPrice = prices[i];
    } else {
      profit = Math.max(prices[i] - lowPrice, profit);
    }
  }
  
  return profit;
};
*/
