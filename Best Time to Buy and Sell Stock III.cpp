class Solution {
public:
    // for better understanding see besttime to buy and sell stock I java solution
    int maxProfit(vector<int>& prices) {
        int onebuyprofit=0;
        int twobuyprofit=0;
        int onebuy=INT_MAX;
        int twobuy=INT_MAX;
        for(int i=0;i<prices.size();i++){
            int p=prices[i];
            onebuy=min(onebuy,p);
            onebuyprofit=max(onebuyprofit,p-onebuy);
            twobuy=min(twobuy,p-onebuyprofit);
            twobuyprofit=max(twobuyprofit,p-twobuy);
        }
        
   return twobuyprofit; }
};
