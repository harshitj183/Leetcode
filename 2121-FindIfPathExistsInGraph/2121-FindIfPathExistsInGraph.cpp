// Last updated: 5/2/2026, 11:26:28 pm
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if (source == destination) return true;
        vector<vector<int>> adj(n);
        adj.reserve(n);
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<char> vis(n, 0);
        queue<int> q;
        q.push(source);
        vis[source] = 1;
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u]) {
                if (!vis[v]) {
                    if (v == destination) return true;
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
        return false;
    }
};
