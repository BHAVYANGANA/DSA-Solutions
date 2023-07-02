class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       
        int n = prices.size();
        int mini = INT_MAX;
        int profit = 0;
        for(int i = 0; i < n - 1; i++){
                mini = min(mini, prices[i]);
                int cost = prices[i+1] - mini;
                profit = max(profit, cost);
        }

        return profit;

    }
};