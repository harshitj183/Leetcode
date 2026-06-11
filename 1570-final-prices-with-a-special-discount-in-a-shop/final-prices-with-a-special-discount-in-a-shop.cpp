class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        vector<int> res;

        for(int i = 0; i < prices.size(); i++) {

            int ans = prices[i];

            for(int j = i + 1; j < prices.size(); j++) {

                if(prices[i] >= prices[j]) {

                    ans = prices[i] - prices[j];
                    break;
                }
            }

            res.push_back(ans);
        }

        return res;
    }
};