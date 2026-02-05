// Last updated: 5/2/2026, 11:28:29 pm
#include <string>


class Solution {
public:
    int addDigits(int num) {
int sum = 0;

if (num < 10) return num; 
 string str = to_string(num);
 for (char i : str){
       sum += (i - '0');  
 }

return addDigits(sum);
        
    }
};