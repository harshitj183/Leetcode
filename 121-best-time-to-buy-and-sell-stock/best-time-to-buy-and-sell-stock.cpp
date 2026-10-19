class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
int res = INT_MIN;
int mnnum = INT_MAX;
for(int i =0 ;i< prices.size();i++){


if(mnnum> prices[i]){

    mnnum = prices[i];
}

res = max(res, prices[i]- mnnum );



}
 return res;

    }
};