// Last updated: 5/2/2026, 11:28:51 pm


class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strs;
                       for (int num : nums) {
                        strs.push_back(to_string(num));
        }
        
                           sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
                                return a + b > b + a;
        });
        
                    string result;
                                       for (const string& s : strs) {
            result += s;
        }
        
                           if (result[0] == '0') {
                         return "0";
        }
        
        return result;
    }
};