// Last updated: 5/2/2026, 11:25:52 pm
class Solution {
public:
    int mirrorDistance(int n) {
int o =n;
        int rev;
 while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
if (o>rev ) {

return o-rev;
    
} 

 return rev-o;       
    }
};