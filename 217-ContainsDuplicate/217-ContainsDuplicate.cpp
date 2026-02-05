// Last updated: 5/2/2026, 11:28:41 pm
 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
                for (int num : nums) {
            if (check.count(num)) {
                return true;  
                      }
                         check.insert(num);
        }
                     return false;  
    }              
};
