//solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miniprice = prices[0];
        int maxprofit = 0;

        for(int i = 0; i < prices.size(); i++){
            miniprice = min(miniprice, prices[i]);
            int profit = prices[i] - miniprice;
            maxprofit = max(maxprofit, profit);
        }

        return maxprofit;
    }
};


//only thing i could have improved is not using profit rather than having the segment directly.