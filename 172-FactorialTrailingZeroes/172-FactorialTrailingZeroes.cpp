// Last updated: 5/2/2026, 11:28:57 pm
class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while(n>0){
            n/=5;
            count+=n;
        }
        return count;
    }
};