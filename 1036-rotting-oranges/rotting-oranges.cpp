class Solution {
public:

    void solve(vector<vector<int>>& grid, queue<pair<int,int>>& q, int &fresh) {

        int row[] = {-1, 1, 0, 0};
        int col[] = {0, 0, -1, 1};

        int sz = q.size();

        while (sz--) {

            auto it = q.front();
            q.pop();

            int x = it.first;
            int y = it.second;

            for (int k = 0; k < 4; k++) {

                int nx = x + row[k];
                int ny = y + col[k];

                if (nx >= 0 && ny >= 0 &&
                    nx < grid.size() &&
                    ny < grid[0].size() &&
                    grid[nx][ny] == 1) {

                    grid[nx][ny] = 2;
                    fresh--;
                    q.push({nx, ny});
                }
            }
        }
    }

    int orangesRotting(vector<vector<int>>& grid) {

        queue<pair<int,int>> q;

        int fresh = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {

                if (grid[i][j] == 2)
                    q.push({i, j});

                else if (grid[i][j] == 1)
                    fresh++;
            }
        }

        if (fresh == 0)
            return 0;

        int count = 0;

        while (!q.empty() && fresh > 0) {

            solve(grid, q, fresh);
            count++;
        }

        if (fresh > 0)
            return -1;

        return count;
    }
};




