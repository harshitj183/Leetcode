class Solution {
public:

    void dfs(vector<vector<int>>& isConnected, int city, vector<int>& vis) {
        vis[city] = 1;

        for (int j = 0; j < isConnected.size(); j++) {
            if (isConnected[city][j] == 1 && !vis[j]) {
                dfs(isConnected, j, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();
        int res = 0;

        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(isConnected, i, vis);
                res++;
            }
        }

        return res;
    }
};