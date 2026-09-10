class Solution {
public:
    vector<int> findSmallestSetOfVertices(
        int n,
        vector<vector<int>>& edges) {

        vector<int> indegree(n, 0);

        // Count incoming edges
        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            indegree[v]++;
        }

        vector<int> res;

        // Nodes having no incoming edge
        for(int i = 0; i < n; i++) {

            if(indegree[i] == 0) {
                res.push_back(i);
            }
        }

        return res;
    }
};