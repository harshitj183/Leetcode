
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> mp;

        // Step 1: Count frequency
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        // Step 2: Store frequency and element
        vector<pair<int, int>> v;

        for(auto it : mp) {
            v.push_back({it.second, it.first});
        }

        // Step 3: Sort by frequency (descending)
        sort(v.rbegin(), v.rend());

        // Step 4: Get top K elements
        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
