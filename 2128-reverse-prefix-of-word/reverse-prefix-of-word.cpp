class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count = 0;
        string str = "";
        bool found = false;
 
        for (char i : word) {
            str += i;
            if (i == ch) {
                found = true;
                break;
            }
            count++;
        }
 
        if (found) {
            reverse(str.begin(), str.end());
            for (int i = count + 1; i < word.size(); i++) {
                str += word[i];
            }
            return str;
        }

        return word;
    }
};
