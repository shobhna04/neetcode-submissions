class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit;
        int maxprofit=0;
        for(int i=0;i<prices.size()-1;i++)
        {int buy=prices[i];

            for(int j=i+1;j<prices.size();j++)
            {
              if (prices[j]>buy)
              {
                profit=prices[j]-buy;
                maxprofit=max(maxprofit,profit);
              }  
            }
        }
        return maxprofit;
    }
};
