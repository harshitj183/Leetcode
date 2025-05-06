class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0, rem,  m=1;
        if(n==0) return 1;
        while(n!=0){  
            rem = n%2;
            rem = rem ^ 1 ;
            n /= 2;
            ans = ans + rem * m;
            m *= 2;
        }
        return ans;
        
    }
};