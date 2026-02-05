// Last updated: 5/2/2026, 11:26:35 pm
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result(s.size(), ' ');
        
        for(int i = 0; i < s.size(); i++) {
            result[indices[i]] = s[i];
        }
        
        return result;
    }
};
