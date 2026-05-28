class Solution {
public:
    string removeOuterParentheses(string s) {

        int n = s.size();
        string res = "";

        int onhai = 0;

        for (int i = 0; i < n; i++) {

            if(s[i] == '(') {

                if(onhai > 0) {
                    res += s[i];
                }

                onhai++;
            }
            else {

                onhai--;

                if(onhai > 0) {
                    res += s[i];
                }
            }
        }

        return res;
    }
};