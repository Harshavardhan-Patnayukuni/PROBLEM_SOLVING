class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,sum=0;
        int n=prices.size();
        for(i=0;i<n-1;i++){
            if(prices[i+1]>prices[i]){
                sum=sum+(prices[i+1]-prices[i]);
            }
        }
        return sum;
    }
};
