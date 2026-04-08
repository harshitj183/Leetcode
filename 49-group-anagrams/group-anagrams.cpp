class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> vec = strs;
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++)
        {
            sort(vec[i].begin(), vec[i].end());
            mp[vec[i]].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto &i : mp)
        {
            res.push_back(i.second);
        }
        return res;

    }
};