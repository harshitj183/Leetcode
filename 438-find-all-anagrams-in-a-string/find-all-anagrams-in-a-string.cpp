class Solution {
public:
bool isvalid(vector<int>& alpha) {
    for (int id : alpha) {
        if (id != 0) {
            return false;
        }
    }
    return true;
}

    vector<int> findAnagrams(string s, string p) {

        vector<int> res;
        vector<int> alpha(26, 0);

        for (auto c : p) {

            alpha[c - 'a']++;
        }

        int i = 0;
        int j = 0;

        while (j < s.size()) {

            alpha[s[j] - 'a']--;

            if (j - i + 1 > p.size()) {

                alpha[s[i] - 'a']++;
                i++;
            }

            if (j - i + 1 == p.size() && isvalid(alpha)) {

                res.push_back(i);
            }

            j++;
        }

        return res;
    }
};