// Last updated: 5/2/2026, 11:26:21 pm
class Solution {
public:
   int minimumOperations(vector<int>& nums) {
    unordered_set<int> s;
    for (int x : nums) {
        if (x > 0)
            s.insert(x);
    }
    return s.size();
}

};
