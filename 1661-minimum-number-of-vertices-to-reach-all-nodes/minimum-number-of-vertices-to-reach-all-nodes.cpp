class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        set<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(i);
        }
        for (auto a : edges) {
            if (st.find(a[1]) != st.end()) {

                st.erase(a[1]);
            }
        }

        vector<int> res;

        for (auto s : st) {

            res.push_back(s);
        }

        return res;
    }
};