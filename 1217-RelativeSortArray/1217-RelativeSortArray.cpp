// Last updated: 5/2/2026, 11:26:52 pm
 

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freq;
        
        // Count frequency of arr1 elements
        for (int x : arr1) {
            freq[x]++;
        }

        vector<int> result;

        // Add elements as per arr2 order
        for (int x : arr2) {
            while (freq[x]--) {
                result.push_back(x);
            }
            freq.erase(x);
        }

        // Remaining elements (not in arr2)
        vector<int> remaining;
        for (auto &p : freq) {
            while (p.second--) {
                remaining.push_back(p.first);
            }
        }

        sort(remaining.begin(), remaining.end());

        // Append remaining elements
        result.insert(result.end(), remaining.begin(), remaining.end());

        return result;
    }
};
