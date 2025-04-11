class Solution {
public:
    int trailingZeroes(int n) {
        int cout = 0;
         while(n>0){
            n/=5;
                           cout+=n;
        }
        return cout;
    }
};