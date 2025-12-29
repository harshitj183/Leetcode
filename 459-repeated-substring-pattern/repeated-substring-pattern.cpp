class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int i = 1; i <= n / 2; i++) {

            if (n % i == 0) {

                string pattern = s.substr(0, i);
                string temp = "";

                for (int j = 0; j < n / i; j++) {
                    temp += pattern;
                }

                if (temp == s)
                    return true;
            }
        }
        return false;
    }
};
