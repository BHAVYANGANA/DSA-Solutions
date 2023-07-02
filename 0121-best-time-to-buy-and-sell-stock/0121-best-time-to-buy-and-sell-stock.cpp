class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       
        int n = prices.size();
        int i = 0;
        int j = 1;
        int mini = INT_MAX;
        int profit = 0;
        while(i < n && j <n){
 //           if(j < n && prices[i] < prices[j]){
                mini = min(mini, prices[i]);
                int cost = prices[j] - mini;
                profit = max(profit, cost);
            //     j++;

            // }
            // else{
                j++;
                i++;
        ////////////   }
        }

        return profit;

    }
};