// Last updated: 5/2/2026, 11:28:59 pm
 
 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
                   unordered_map<int, int> freq;
        int n = nums.size();

                               for (int num : nums) {
            freq[num]++;
                           if (freq[num] > n / 2) {
                        return num;  
            }
        }
        return -1;  
    }
};
