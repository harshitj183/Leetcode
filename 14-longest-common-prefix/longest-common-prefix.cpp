class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int s = strs.size();
        if (s == 0) return "";

        string res ;
        bool res1 = true;
        int j = 0;

        while (res1) {
            char temp = strs[0][j];

            for (int i = 0; i < s; i++) {

                // length check
                if (j >= strs[i].length()) {
                    res1 = false;
                    break;
                }

                // character mismatch
                if (strs[i][j] != temp) {
                    res1 = false;
                    break;
                }
            }

            if (res1)
                res += temp;

            j++;
        }

        return res;
    }
};
