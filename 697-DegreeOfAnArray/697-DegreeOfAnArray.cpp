// Last updated: 5/2/2026, 11:27:24 pm
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
                   unordered_map<int, int> freq, first, last;
                int degree = 0;

        for (int i = 0; i < nums.size(); ++i) {
                          int num = nums[i];

                           if (first.find(num) == first.end()) {
                first[num] = i;  
            }

            last[num] = i;        
                             freq[num]++;        
            degree = max(degree, freq[num]); 
        }

        int minLen = nums.size();

        for (auto& [num, f] : freq) {
                                     if (f == degree) {
                minLen = min(minLen, last[num] - first[num] + 1);
            }
        }

        return minLen;
    }
};
