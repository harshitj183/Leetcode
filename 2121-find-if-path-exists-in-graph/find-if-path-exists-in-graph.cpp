class Solution {
public:
    vector<vector<int>> adj;
    vector<bool> visited;

    bool dfs(int node, int destination) {
        if (node == destination)
            return true;

        visited[node] = true;

        for (int nei : adj[node]) {
            if (!visited[nei]) {
                if (dfs(nei, destination))
                    return true;
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges,
                   int source, int destination) {

        adj.resize(n);
        visited.resize(n, false);

        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return dfs(source, destination);
    }
};