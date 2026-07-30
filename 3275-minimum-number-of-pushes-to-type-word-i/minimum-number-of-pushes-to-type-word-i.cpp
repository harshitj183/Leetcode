class Solution {
public:
    int minimumPushes(string word) {



    int sz = word.size();
 
int res =0 ;


// < 8 to fir mul * 1
// > 8 && 16  mull  *2 

// 16 /8 =2 

 // 1 - 8
 // 2  8 + 8 *2
// 3  8  + 8 ( *2 ) 8 *3


int rem = sz % 8;
int n = sz/8;
int temo =  8 *( (n *(n+1))/2);

res += rem * ((sz/8) +1);

res += temo;

return res;

        
    }
};