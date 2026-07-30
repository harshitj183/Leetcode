class Solution {
public:
    int minimumPushes(string word) {

        int sz = word.size();

        int res = 0;

       
        int n = sz / 8;
 
        int rem = sz % 8;

     
        int temp = 8 * (n * (n + 1) / 2);

        res += temp;

      
        res += rem * (n + 1);

        return res;
    }
};