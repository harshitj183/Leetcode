class Solution {
public:
    
 bool checkPerfectNumber(int num) {
        
        if (num == 1) {
            return false;  
        }

        
        int sumOfDivisors = 1;  
 
        for (int i = 2; i <= sqrt(num); ++i) {  
            if (num % i == 0) {  
                sumOfDivisors += i;  
                 
                if (i != num / i) {
                    sumOfDivisors += num / i;
                }
            }
        }
 
        if (sumOfDivisors == num) {
            return true;  
        } else {
            return false; 
        }
    }











};