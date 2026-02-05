// Last updated: 5/2/2026, 11:26:57 pm
class Solution {
public:
    int bitwiseComplement(int n) {
        int res=0, ll,  m=1;
        if(n==0) return 1;
        while(n!=0){  
            ll = n%2;
                        ll = ll ^ 1 ;
            n /= 2;
            res = res + ll * m;
            m *= 2;
        }
        return res;
        
    }
};