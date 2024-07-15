class Solution {
public:
    int maxProfit(vector<int>& prices) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int mini = prices[0], profit = 0;

        for(int it: prices) {
            mini = min(mini, it);
            profit = max(profit, it - mini);
        }

        return profit;
    }
};
