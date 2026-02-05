// Last updated: 5/2/2026, 11:28:17 pm
 

class Solution {
public:
    bool isPowerOfThree(int n) {
	if(!n) return false;
	while(n % 3 == 0) n /= 3;    
	return n == 1;
}


};