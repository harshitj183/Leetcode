class Solution {
public:
    string reverseWords(string s) {

        string res = "";
        int i = 0;
        string temp = "";

        while(i < s.size()) {

            if(s[i] == ' ') {

                if(temp != "") {
                    res = temp + " " + res;
                    temp = "";
                }

            } else {
                temp += s[i];
            }

            i++;
        }

        if(temp != "") {
            res = temp + " " + res;
        }

        res.pop_back();

        return res;
    }
};