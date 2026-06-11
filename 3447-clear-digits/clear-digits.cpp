class Solution {
public:
    string clearDigits(string s) {

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {

                for (int j = i - 1; j >= 0; j--) {

                    if (isalpha(s[j]) && s[j] != '*') {

                        s[j] = '*';
                        break;
                    }
                }

                s[i] = '*';
            }
        }

        string res = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != '*') {

                res += s[i];
            }
        }

        return res;
    }
};