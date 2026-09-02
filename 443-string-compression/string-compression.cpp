class Solution {
public:
    int compress(vector<char>& chars) {

        vector<char> res;

        for (int i = 0; i < chars.size(); ) {

            char start = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == start) {
                count++;
                i++;
            }

            res.push_back(start);

            if (count > 1) {
                string s = to_string(count);

                for (char c : s) {
                    res.push_back(c);
                }
            }
        }

        chars = res;
        return res.size();
    }
};