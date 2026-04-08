class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";

        for (char i : s) {

            if (isalnum(i)) {

                s2 += tolower(i);
            }
        }

        if (s2.size() == 1) {

            return true;
        }
        if (s2.size() % 2 == 0) {

            for (int i = 0; i < s2.size(); i++) {

                if (s2[i] != s2[s2.size() - 1 - i]) {

                    return false;
                }
            }
        }

        else {


        for (int i =0 ; i < s2.size()/2;i++){


            if ( s2[i] != s2[s2.size() -1-i]  ) return false;
        }
        }

        return true;
    }
};