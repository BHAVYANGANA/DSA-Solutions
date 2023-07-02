class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       
        int n = prices.size();

        int mini = INT_MAX;
        int profit = 0;
        for(int i = 0, j = 1; i,j <n;){
                mini = min(mini, prices[i]);
                int cost = prices[j] - mini;
                profit = max(profit, cost);
                j++;
                i++;
        }

        return profit;

    }
};