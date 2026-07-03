class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {

        // Store the degree (number of connected roads) of each city
        vector<int> visited(n, 0);

        // Check whether two cities are directly connected
        vector<vector<bool>> connected(n, vector<bool>(n, false));

        // Count degrees and mark direct connections
        for (int i = 0; i < roads.size(); i++) {

            visited[roads[i][0]]++;
            visited[roads[i][1]]++;

            connected[roads[i][0]][roads[i][1]] = true;
            connected[roads[i][1]][roads[i][0]] = true;
        }

        int res = 0;

        // Check every pair of cities
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int rank = visited[i] + visited[j];

                // If directly connected, subtract 1
                if (connected[i][j]) {
                    rank--;
                }

                res = max(res, rank);
            }
        }

        return res;
    }
};