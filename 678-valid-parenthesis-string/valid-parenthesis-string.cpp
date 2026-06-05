class Solution {
public:
    bool checkValidString(string s) {

        int n = 0; // low
        int m = 0; // high

        for(char c : s) {

            if(c == '(') {
                n++;
                m++;
            }
            else if(c == ')') {
                n--;
                m--;
            }
            else { // '*'
                n--;
                m++;
            }

            if(m < 0) {
                return false;
            }

            n = max(n, 0);
        }

        return n == 0;
    }
};