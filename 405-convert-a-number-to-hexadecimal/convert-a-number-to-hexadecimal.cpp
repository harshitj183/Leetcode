class Solution {
public:
    string toHex(int num) {
      
        if (num == 0) return "0";
          string hexbhai ;
        unsigned int n = num;    
        const char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9','a', 'b', 'c', 'd', 'e', 'f'};
 
        while (n > 0) {
            hexbhai = hexDigits[n % 16] + hexbhai;   
            n /= 16;  
        }

        return hexbhai; 
    }
};