class Solution {
public:
    bool isPalindrome(int x) {

        int y = x;
       string numStr = to_string(x);

string  numStr1 = numStr;

reverse(numStr1.begin(),numStr1.end());


        bool result =  (numStr1 == numStr);

            if (x < 0) {

            return false;
        }

        else {

            return result;
        }
    }
};