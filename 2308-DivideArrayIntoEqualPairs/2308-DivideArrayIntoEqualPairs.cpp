// Last updated: 5/2/2026, 11:26:23 pm
class Solution {
public:
    bool divideArray(vector<int>& nums) {
 unordered_map<int, int> freq;

                      for (int num : nums) {
             
            freq[num]++;
        } 
         for (auto& [key, value] : freq) {
                           if (value % 2 != 0) { 
                 return false;
            }
        }

        return true;
    }
};
