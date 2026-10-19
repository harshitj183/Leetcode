class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

int res  = 0 ;
int prev = prices[0];

for(int i =1 ; i< prices.size();i++){

int sub = prices[i] -prev;
if(sub >0){


    res += sub;
}

prev = prices[i];
}



return res;
    }
};