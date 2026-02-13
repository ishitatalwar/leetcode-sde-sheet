class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // optimal approach 
        int n = prices.size();

        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i = 0; i <n ; i++){
            minPrice = min(minPrice, prices[i]);
            int profit = prices[i] - minPrice;
            maxProfit = max(maxProfit, profit);
        }
        // for(int i = 0; i<n; i++){
        //     if(prices[i] < minPrice){
        //         minPrice = prices[i];
        //     }
        //     else{
        //         maxProfit = max(maxProfit, prices[i] - minPrice);
        //     }
        // }
        return maxProfit;
        // return maxProfit;       
    }
};