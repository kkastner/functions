    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) {
            return 0;
        }
        int max_profit = 0;
        int low_price = prices[0];
        for (int i=0; i < n; i++) {
            if (prices[i] <= low_price) {
                low_price = prices[i];
                continue;
            }
            int curr_profit = prices[i]-low_price;
            if (i == n-1 || prices[i] > prices[i+1]) {
                max_profit += curr_profit;
                low_price = prices[i];
            }
        }
        return max_profit;
    }